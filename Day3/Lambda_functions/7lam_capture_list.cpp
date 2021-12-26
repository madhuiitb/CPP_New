#include<iostream>
using namespace std;
#include<string>

//Function pointers can not be optimized by the compiler
// FP are points to global functions and global functions can not have a state
//Callback has been implimented through function pointers, but can be do by function objects as well

//using Comparator = bool(*)(int, int); //It's an alias
//template<typename T, int size>
template<typename T, int size, typename Comparator>
void Sort(T (&arr)[size], Comparator comp){
    for(int i=0;i<size;i++){
    //    int temp = arr[i];
        for(int j=0;j<size-1;j++){
            if(comp(arr[j], arr[j+1])){
                T temp = move(arr[j]);
                arr[j]=move(arr[j+1]);
                arr[j+1]=move(temp);
            }
        }
    }
}
// These are the predicates for the comparision of the two elements
bool Comp(int x, int y){
    return x>y;
}

bool Comp2(int x, int y){
    return x<y;
}

struct Comp3{
    bool operator()(int x, int y){
        return x>y;
    }
};

template<typename T, int size, typename Callback>
void ForEach(T (&arr)[size], Callback operation){
    for(int i=0;i<size;i++){
        operation(arr[i]);
    }
}

template<typename T>
struct testOffset{
    int offset;
    testOffset(int off):offset(off){

    }
    void operator()(T &x){
        x=x+offset;
        ++offset;
    }
};

class Product{
    string name;
    float price;
public:
    Product(const string &n, float p ):name(n),price(p){

    }
    void AssignFinalPrice(){
        float taxes[]{12,5,5};
        float basePrice{price};
        ForEach(taxes, [basePrice, this](float tax){
            float taxedPrice = basePrice*tax/100;
            price+=taxedPrice;
        });
    }
    float GetPrice()const{
        return price;
    }
};

int main(){
    int i =10;

    atexit([](){
        cout<<"\nProgram is  Existing if it does not provide any capture variables::"<<endl;
    });

    // It will give the Error because it will not capture any variables
    // atexit([i](){
    //     cout<<"Program is  Existing::"<<endl;
    // });


    //If a Lambda Expression does not specify a capture clause  then it automatically decomposes into a function pointer
    // that means you can use Lambda Expressions are Callback functions in C++

    // Product p{ "Watch", 500};
    // p.AssignFinalPrice();
    // std::cout << "Final Price::- " <<p.GetPrice()<< '\n';

    [](int x){
        x*=3;
        [](int x){
            cout<<"X::- "<<x<<endl;
        }(x);
    }(10);

    testOffset<int> to(3);
    int x=5;
    to(x);
    int arr[]{4,7,9,2,5};
    ForEach(arr, [](auto x){
        cout<<x<<" ";
    });
    cout<<"\n";
    // int offset = 5;
    // ForEach(arr, [offset](auto &x){
    //     x=x+offset;
    //     //cout<<x<<" ";
    // });

    // int offset = 5;
    // ForEach(arr, [offset](auto &x)mutable{ // To modify any value in the Lambda need to use mutable
    //     x=x+offset;
    //     ++offset;
    //     //cout<<x<<" ";
    // });
    int offset =0;
    int sum{}; // You can capture variables is value by or by reference
    //  [&sum, &offset] is equal to [&] it is saying you can capture all the variables by reference
    //  [sum, offset] is equal to [=] it is saying you can capture all the variables by value
    //  [=, &sum] it is saying you can capture all the variables by value except sum
    //  [&, sum] it is saying you can capture all the variables by reference except sum
    //  [this] it is saying you can capture all the member variables
    // One major important is it will capture all the variables which are declared above the Lambda Expressions
    // If you declare the any variables after the Lambda expression it will not capture
    ForEach(arr, [&sum, &offset](auto &x){ // To modify any value in the Lambda need to use mutable
        sum+=x;
        //cout<<x<<" ";
    });
    cout<<"Sum ::- "<<sum<<endl;
    ForEach(arr, [](auto x){
        cout<<x<<" ";
    });
    return 0;
}
