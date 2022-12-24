/**********************Constants, Manipulators & Operator Precedence*****************************/
#include <iostream>
#include <iomanip>

using namespace std;
//we already see in previously code is we can change our variable in code in here we can see change value to
int main(){
    // int a = 43;
    // cout<<"The value of a was: "<<a<<endl;
    //  a = 32;
    // cout<<"The value of a now: "<<a;
    
//Constant in C++   <<<constant mean jo value variable main rahegi usko change nhi kar sakte
//  const int b = 12;
//  cout<<"The value of b is"<<b<<endl;
//   b = 2;  <<You will get error because b is constant
//  cout<<"The value is b is"<<b<<endl;

//Manipulators in C++   <<you should include iomanip using while iomanip
// int x = 2 , y = 21, z = 3456;

// cout<<"The value of x without setw is"<<x<<endl;
// cout<<"The value of y without setw is"<<y<<endl;
// cout<<"The value of z without setw is"<<z<<endl;

// cout<<"The value of x with setw is"<<setw(4)<<x<<endl;
// cout<<"The value of y with setw is"<<setw(4)<<y<<endl;
// cout<<"The value of z with setw is"<<setw(4)<<z<<endl;


//Operator Precedence                <<check search Operator Precedence in https://en.cppreference.com/w/cpp/language/operator_precedence
int a =3, b=4;
// int c = (a*b)+b;
int c = ((((a*b)+b)-45)+87)      //<<<<*multiplier pehle precendence le raha hai uske ke baad + aur - liya



    return 0;
}