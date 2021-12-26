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
    unique_ptr<Project> prj{};
  public:
    void SetProject(unique_ptr<Project> &prj1){
      prj = move(prj1);
    }
    const unique_ptr<Project>& GetProject()const{
      return prj;
    }
};

void ShowInfo(unique_ptr<Employee> &emp){
  emp->GetProject()->ShowProjectDetails();
}

int main(){
  unique_ptr<Project> prj2{new Project{}};
  prj2->SetName("SDE");
  unique_ptr<Employee> e1{new Employee{}};
  e1->SetProject(prj2);
  unique_ptr<Employee> e2{new Employee{}};
  e2->SetProject(prj2);
  unique_ptr<Employee> e3{new Employee{}};
  e3->SetProject(prj2);

  ShowInfo(e1);
  ShowInfo(e2);
  ShowInfo(e3);

  prj2->ShowProjectDetails();

}
