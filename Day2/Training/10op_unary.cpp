#include<iostream>
using namespace std;

class Point{
    int *ptr;
public:
    Point(){
      cout<<"---::Point Default  Constructor called::---"<<endl;
      ptr = new int(0);
    }

    Point(int val){
      cout<<"---::Point Parameterized  Constructor called::---"<<endl;
      ptr = new int(val);
    }

    Point(const Point &obj){
      cout<<"---::Point Copy  Constructor called::---"<<endl;
      ptr = new int(*obj.ptr);

    }

    Point(Point && obj) { // rvalue reference to the class type as its parameter
    	cout << "---::Point Move  Constructor called::---" << endl;
    	ptr = obj.ptr; // Moving the Value
        //assign the class data members from the source object to the object that is being constructed:
    	obj.ptr = nullptr; // assign it to a nullptr which is null for the current object
    }

    // Point operator - (){
    //     return Point(-);
    // }

    Point operator ++ (){ // Pre-Increment operator
        // Point p;
        // p.x=++x;
        // return p;

        //Point temp(*this);
        ++(*ptr);
        return *this;
    }

    Point operator ++ (int){ // post-Increment operator
        // Point p;
        // //p.x=x++;
        // p.y=y++;
        // return p;

        Point temp(*this);
        ++(*ptr);
        return temp;
    }

    bool operator==(const Point &obj)const{
      return *ptr == *obj.ptr;
    }

    Point& operator=(const Point &obj){
      if(this!=&obj){
        delete ptr;
        ptr = new int (*obj.ptr);
      }
      return (*this);
    }

    Point& operator=(Point &&obj){ // Move assignment operator.
      if(this!=&obj){ //add a conditional statement that performs no operation if you try to assign the object to itself.
        delete ptr;
        ptr = obj.ptr;
        obj.ptr = nullptr;
      }
      return (*this);
    }
    void operator ()(){
      cout<<"Function overload operator::- "<<*ptr<<endl;
    }


    int GetValue()const{
      return *ptr;
    };
    void SetValue(int val){
      *ptr=val;
    }

    ~Point(){
      cout<<"---::Point Destructor called::---"<<endl;
      delete ptr;
    }
};

// Normal function
Point Add(const Point &a, const Point &b){
  Point temp;
  temp.SetValue(a.GetValue() + b.GetValue());
  return temp;
}

// Global operator overloading function
Point operator+(const Point &a, const Point &b){
  Point temp;
  temp.SetValue(a.GetValue() + b.GetValue());
  return temp;
}

int main(){

    Point a(7), b(3);
    Point sum = a + b;
    ++sum;

    cout<<"Sum of the two::- "<<(sum++).GetValue()<<endl;
    if(a==b){
      cout<<" Both values are same::- "<<endl;
    }
    else{
      cout<<"Both values are not same"<<endl;
    }

    Point c;
    c=a; // Assignment operator
    b=b; // L Value and R-values are same
    a(); // Function overloading
    cout<<"End of program:- "<<b.GetValue()<<endl;


    // Point p1(1,2), p2(4,5);
    // // Point p3 = p1 + p2;
    // // p3.ShowValues();
    // Point p3= -p1;
    // p3.ShowValues();
    // ++p1;
    // p1.ShowValues();
    //
    // ++p2;
    // p2.ShowValues();
    // p2.ShowValues();


    //
    // Point p4(7,6), p5(6,2);
    // Point p6 = p4*p5;
    // p6.ShowValues();
    //
    // Point p7 = p6/p3;
    // p7.ShowValues();
    return 0;
}
