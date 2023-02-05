/***Constructor Overloading***/

#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
public:
    Complex (int x , int y){
        a = x;
        b = y;
    }

    Complex (int x){
        a = x;
        b = 0;  
    }

    Complex(){
        a = 0;
        b = 0;
    }

        void PrintNumber(){
        cout<<"Your number "<<a<<" + "<<b<<" i "<<endl;
    }


};

int main(){

    Complex d1(1, 6);
    d1.PrintNumber();

    Complex q1(4);    // b value is default is 0 
    q1.PrintNumber();
    
    Complex w1;
    w1.PrintNumber();
    return 0;
}