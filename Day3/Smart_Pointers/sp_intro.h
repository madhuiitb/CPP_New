#pragma once
#include<iostream>

class Integer{
  int *ptr;
public:
  Integer(); // Default Constructor
  Integer(int val); // Parameterized Constructor
  Integer(const Integer &obj); // Copy Constructor
  // Integer operator +(const Integer &a)const;
  Integer & operator++(); //Pre Increment operator
  Integer  operator++(int); //Post Increment operator
  bool operator == (const Integer &obj)const; //Comparision operator
  Integer & operator=(const Integer &obj); //Assignment operator

  //
   Integer & operator=(Integer &&obj); //Move operator Constructor

  // friend istream & operator << (istream & input, const Integer &a);

   void operator ()(); // Function Call overload operator extensively used in STL's
  int GetValue()const; // Value will be return
  void SetValue(int val); // Value will be assigned to pointer
  ~Integer(); //Default Destructor
};
