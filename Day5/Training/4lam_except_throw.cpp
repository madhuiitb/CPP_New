//#include<iostream>

int main(){
    //throw will always call terminate()
    // []()noexcept {
    //     throw 5;
    // }();

        // /terminate called after throwing an instance of 'int'
    [](){
        throw 5;
    }();
}
