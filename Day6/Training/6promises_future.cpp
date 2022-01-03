
namespace nm{
        template <typename T>
        class nm_state{
            std::mutex _mutex;
            std::condition_variables _cv;
            bool _ready;
            T _value;
        public:
            nm_state():_ready(false),_value{}{
                //Empty Constructor, only values initializing
            }

            void set(T&& value){
                std::lock_guard<std::mutex> lock(_mutex);
                _value = std::forward<T>(value);
                _ready = true;
                _cv.notify_all();
            }

            bool ready(){
                std::lock_guard<std::mutex> lock(_mutex);
                return _ready;
            }

            T wait_until_take(){
                if(_ready){
                    return std::move(_value);
                }
                std::unique_lock<std::mutex> lock(_mutex);
                _cv.wait(lock, [this]()->bool{
                    return _ready;
                });

                return std::move(_value);
            }
        };
}
