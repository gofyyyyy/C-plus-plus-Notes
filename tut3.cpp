/*Header files & opreater*/

//there are two types of header file 

//1. System header file compiler ke saath atta hai
#include <iostream>    //<<<<THis is system header file
//2. User defined header file : isse programmer likhte hai
//#include "this.h"    //<<< this is user define header file aur agar current directory main yeah nhi h toh error ayega


using namespace std;

int main() {
    int a =4, b=5;
cout<<"Operators in C++:"<<endl;
cout<<"Following types of operators in C++:"<<endl;
//Arithemetic Operators

cout<<"The value of a + b is "<<a+b<<endl;
cout<<"The value of a - b is "<<a-b<<endl;
cout<<"The value of a * b is "<<a*b<<endl;
cout<<"The value of a % b is "<<a%b<<endl;
//a++ value increment toh hoti par orignal value hi print hoti h
cout<<"The value of a ++ is "<<a++<<endl;
//a-- a ki value  +1 se increment hoti hai kiyuke -- plus hota hai ++ isme a ki value 1 plus hoke print hoti h
cout<<"The value of a -- is "<<a--<<endl;
cout<<"The value of ++a  is "<<++a<<endl;
cout<<"The value of --a is "<<--a<<endl;
cout<<endl;


//Assignment Operators --> used to assign values to variabele 
// int y=3 , z=9;
// char d='d';

//Comparison Operators

cout<<"Following are the Comparison Operators in C++"<<endl;
cout<<"The value of a == b is"<<(a==b)<<endl;
cout<<"The value of a != b is"<<(a!=b)<<endl;
cout<<"The value of a >= b is"<<(a>=b)<<endl;
cout<<"The value of a <= b is"<<(a<=b)<<endl;
cout<<"The value of a > b is"<<(a>b)<<endl;
cout<<"The value of a < b is"<<(a<b)<<endl;
cout<<endl;

//Logical Operators

cout<<"Following are the logical Operators in C++"<<endl;
//&& operators main dono ki value true rehni cahiye nhi toh value true print nhi karega 
cout<<"The value of this logical and Operators ((a==b) && (a<b)) "<<((a==b) && (a<b))<<endl;
//|| or operators maib dono main se ek value true rehna cahiye toh value true print karega
cout<<"The value of this logical or Operators ((a==b) || (a<b)) "<<((a==b) || (a<b))<<endl;
// !<<this is called not 
cout<<"The value of this logical not Operators(!(a==b))"<<(!(a==b))<<endl;

 


    return 0;
}