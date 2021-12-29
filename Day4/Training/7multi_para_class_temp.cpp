#include<iostream>
using namespace std;

template<class T, class U, class V=char>
class MultipleParameters{
    T t_var;
    U u_var;
    V v_var;
public:
    MultipleParameters(T a, U b, V c):t_var{a},u_var{b},v_var{c}{
        cout<<"\n---------------------------------\n";
        cout<<"T type: "<<typeid(T).name();
        cout<<"\tU type: "<<typeid(U).name();
        cout<<"\tV type: "<<typeid(V).name();
        cout<<"\n Constructor called with values:\n";
    }
    void Print(){
        cout<<"==> t_var:="<<t_var;
        cout<<"\tu_var:="<<u_var;
        cout<<"\tv_var:="<<v_var<<"\n";
    }
};

int main(){
    MultipleParameters<int,double> obj1(4,3.8,'c');
    obj1.Print();

    MultipleParameters<int,float,bool> obj2(4,3.8,true);
    obj2.Print();
    return 0;
}
