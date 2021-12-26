#include<iostream>
using namespace std;

class TestEncapsulation{
private:
    int salaryEmp;
public:
    void setSalaryEmp(int x){
        salaryEmp = x;
    }
    int getSalaryEmp(){
        return salaryEmp;
    }
};

int main(){

    TestEncapsulation t1;
//    t1.salaryEmp=2000; //std::string testClass4::testString4' is private within this context
    t1.setSalaryEmp(1000);
    cout<<"Salary of the Employee::- "<<t1.getSalaryEmp()<<endl;
    return 0;
}
