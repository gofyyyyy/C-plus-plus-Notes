/***Function arguments***/
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
public:
    void setData(int h1, int h2){
        a = h1;
        b = h2;
    }
    void setDataBySum(complex f1, complex f2){
        a=f1.a + f2.a;
        b=f1.b + f2.b;
    }
    void PrintNumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

int main(){
    complex c1,c2,c3;
    c1.setData(2,4);
    c1.PrintNumber();

    c2.setData(3,6);
    c2.PrintNumber();

    c3.setDataBySum(c1,c2); //kada kada plus hota hai
    c3.PrintNumber();
    return 0;
}