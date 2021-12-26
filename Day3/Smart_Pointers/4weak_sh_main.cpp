#include<iostream>
#include<string>
using namespace std;
#include "memory"

class Employee;

class Project{
public:
//  shared_ptr<Employee> emp_p;
  weak_ptr<Employee> emp_p;
  Project(){
    cout<<"Project Constructor::-"<<endl;
  }
  ~Project(){
    cout<<"Project Destructor::-"<<endl;
  }
};



class Employee{
public:
//  weak_ptr<Project> prj_p;
  shared_ptr<Project> prj_p;
  Employee(){
    cout<<"Employee Constructor::-"<<endl;
  }
  ~Employee(){
    cout<<"Employee Destructor::-"<<endl;
  }
};



int main(){
  shared_ptr<Employee> e1{new Employee{}};
  shared_ptr<Project> prj2{new Project{}};

  e1->prj_p = prj2;
  prj2->emp_p = e1;

  // delete e1;
  // delete prj2;

}
