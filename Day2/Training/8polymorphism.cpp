#include<iostream>
using namespace std;

void Add(int a, int b){ // Function
    cout<<a+b<<endl;
}

class AnimalClass{
public:
    AnimalClass(){
        
    }
    void Sound() {
        cout<<"Every Animal makes a sound\n";
    }
    void Eat(){ // Method
        cout<<"Animals eat Generic Food\n";
    }
};

class DogClass : public AnimalClass {
public:
    void Sound() {
        cout<<"The dog says: bow bow\n\n";
    }
    void Eat(){
        cout<<"Dog eats Only Meet Food\n";
    }
};

class CatClass : public AnimalClass{
public:
    void Sound() {
        cout<<"The cat says: meaw meaw\n\n";
    }
    // void Eat(){
    //     cout<<"Cat drinks milk Food\n";
    // }
};

int main(){
    AnimalClass animalObject;
    DogClass dogObject;
    CatClass catObject;
    //
    // animalObject.Sound();
    // dogObject.Sound();
    // catObject.Sound();
    // catObject.Eat(); //Direct AnimalClass method.

    AnimalClass *obj1 = new DogClass;
    AnimalClass *obj2 = new CatClass;
    obj1->Sound(); // AnimalClass output
    obj2->Sound(); // AnimalClass output

    return 0;
}
