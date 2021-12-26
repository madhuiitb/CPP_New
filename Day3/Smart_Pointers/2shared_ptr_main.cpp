#include<iostream>
#include<string>
using namespace std;
#include "memory"

class Project{
  string Name;
public:
  void SetName(const string &name){
    Name = name;
  }

  void ShowProjectDetails()const{
    cout<<"Project Name::---"<<Name<<endl;
  }
};



class Employee{
    //Project *prj{};
    shared_ptr<Project> prj{};
  public:
    void SetProject(const shared_ptr<Project> &prj1){
      prj = prj1;
    }
    const shared_ptr<Project>& GetProject()const{
      return prj;
    }
};

void ShowInfo(shared_ptr<Employee> &emp){
  emp->GetProject()->ShowProjectDetails();
}

int main(){
  shared_ptr<Project> prj2{new Project{}};
  prj2->SetName("SDE");
  shared_ptr<Employee> e1{new Employee{}};
  e1->SetProject(prj2);
  shared_ptr<Employee> e2{new Employee{}};
  e2->SetProject(prj2);
  shared_ptr<Employee> e3{new Employee{}};
  e3->SetProject(prj2);

  ShowInfo(e1);
  ShowInfo(e2);
  ShowInfo(e3);

  cout<<"reference Count::---"<<prj2.use_count()<<endl; //It has to use only for debuggin
  prj2->ShowProjectDetails();

  
  e3.reset(); //when you reset the value then automatically it will decrement the reference Count


  cout<<"reference Count::---"<<prj2.use_count()<<endl;

}
