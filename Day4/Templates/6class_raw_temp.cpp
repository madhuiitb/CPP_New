#include<iostream>
using namespace std;
class Stack{
    int buffer1[512];
    int top{ -1 };
public:
    void Push(int val){
        buffer1[++top]=val;
    }
    void Pop(){
        --top;
    }
    int Top(){
        return buffer1[top];
    }
    bool IsEmpty(){
        return top ==-1;
    }
};

int main(){
    Stack s;

    s.Push(10);
    s.Push(20);
    s.Push(100);
    s.Push(11);

    while(!s.IsEmpty()){
        cout<<s.Top()<<endl;
        //cout<<"TEST"<<endl;
        s.Pop();
    }
    return 0;
}
