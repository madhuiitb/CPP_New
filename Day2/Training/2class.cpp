#include<iostream>
#include<string>
using namespace std;

class testClass1{
public:
    int testNum1;
    string testString1;
    void showValues(){
        cout<<"Int Value::- "<<testNum1<<endl;
        cout<<"String Value::- "<<testString1<<endl;
    }
};

class testClass2{
private:
    int testNum2;
    string testString2;
    void showValues(){
        cout<<"Int Value::- "<<testNum2<<endl;
        cout<<"String Value::- "<<testString2<<endl;
    }
};

class testClass3{
protected:
    int testNum3;
    string testString3;
    void showValues(){
        cout<<"Int Value::- "<<testNum3<<endl;
        cout<<"String Value::- "<<testString3<<endl;
    }
};

class testClass4{
    int testNum4;
    string testString4;
public:
    void showValues(){
        cout<<"Int Value::- "<<testNum4<<endl;
        cout<<"String Value::- "<<testString4<<endl;
    }
};

int main(){
    testClass1 t1;
    t1.testNum1 = 10;
    t1.testString1 = "testClass1";
    // t1.showValues();

    // testClass2 t2;
    // t2.testNum2 = 20;
    // t2.testClass2 = "testClass2";
    // t2.showValues();

    // testClass3 t3;
    // t3.testNum3 = 30;
    // t3.testString3 = "testClass3";
    // t3.showValues();
    testClass4 t4;
    t4.testNum4 = 40;
    t4.testString4 = "testClass4";
    t4.showValues();
    return 0;
}
