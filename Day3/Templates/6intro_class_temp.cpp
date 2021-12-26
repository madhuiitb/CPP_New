#include<iostream>
using namespace std;

template<typename T, int size>
class Stack{
    T buffer1[size];
    int top{ -1 };
public:
    Stack()=default;
    Stack(const Stack &obj){
        top=obj.top;
        for(int i=0;i<top;i++){
            buffer1[i]=obj.buffer1[i];
        }
    }
    void Push(const T &val){ //The value is constant we are not changing, so we can use that constant
        buffer1[++top]=val;
    }
    void Pop(){
        --top;
    }
    const T& Top(){
        return buffer1[top];
    }
    bool IsEmpty(){
        return top ==-1;
    }
    static Stack Create(){ //Short hand notation will work in the class only
        return Stack<T, size>();
    }
};

//
// template<typename T, int size>
// void Stack<T, size>::Pop(){
//     --top;
// }
//
// template<typename T, int size> // It will be work outside the class
// Stack<T, size> Stack<T, size>::Create(){ //Long hand notation
//     return Stack<T, size>();
// }

int main(){
    Stack<float, 4> s = Stack<float, 4>::Create(); //Specify the type here

    s.Push(10);
    s.Push(20);
    s.Push(100);
    s.Push(11);
    auto  s2(s);
    while(!s2.IsEmpty()){
        cout<<s2.Top()<<endl;
        //cout<<"TEST"<<endl;
        s2.Pop();
    }
    return 0;
}
