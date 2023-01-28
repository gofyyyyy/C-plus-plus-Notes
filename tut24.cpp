/***Friend Classes & Member Friend Function ***/
#include<iostream>
using namespace std;

//Forward declaration       iska matlab age apko class Complex milega is baat ki guarantee leta hu
class Complex;

class calculator{
    public:
    int add(int a , int b){
        return(a + b);
    }
    int sumRealComplex(Complex , Complex );    //pehle declaration phir defination
    int sumCompComplex(Complex , Complex );
};


class Complex{
    int a, b;
    // individually declaring functions as friends
    // friend int calculator::sumRealComplex(Complex , Complex );
    // friend int calculator::sumCompComplex(Complex , Complex );

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setNumber(int h1, int h2){
        a = h1;
        b = h2;
    }
    void PrintNumber(){
        cout<<"Your number "<<a<<" + "<<b<<" i "<<endl;
    }

    
};

    int calculator:: sumRealComplex(Complex f1, Complex f2){   //defination
        return(f1.a + f2.a);
    }
    int calculator:: sumCompComplex(Complex f1, Complex f2){
        return(f1.b + f2.b);
    }

int main(){
    Complex f1, f2;
    f1.setNumber(7, 5);
    f2.setNumber(3, 3);
    calculator calc;
    int res = calc.sumRealComplex(f1,f2);
    cout<<" The sum of Real part of f1 and f2 "<<res<<endl;
    int resc = calc.sumCompComplex(f1,f2);
    cout<<" The sum of Comp part of f1 and f2 "<<resc<<endl;
    return 0;
}