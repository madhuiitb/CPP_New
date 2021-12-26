#include<iostream>
#include<string>
using namespace std;


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
    Project *prj{};
  public:
    void SetProject(Project *prj1){
      prj = prj1;
    }
    const Project * GetProject()const{
      return prj;
    }
};

void ShowInfo(Employee *emp){
  emp->GetProject()->ShowProjectDetails();
}

int main(){
  Project *prj2 = new Project{};
  prj2->SetName("SDE");
  Employee *e1 = new Employee{};
  e1->SetProject(prj2);
  Employee *e2 = new Employee{};
  e2->SetProject(prj2);
  Employee *e3 = new Employee{};
  e3->SetProject(prj2);

  ShowInfo(e1);
  ShowInfo(e2);
  ShowInfo(e3);

  prj2->ShowProjectDetails();

  delete prj2;
  delete e1;
  delete e2;
  delete e3;

}
