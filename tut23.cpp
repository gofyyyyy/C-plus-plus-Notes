/***Freiend Function***/
#include<iostream>
using namespace std;

// 1 + 5i      a  + bi
// 4 + 5i      a  + bi
//--------     --------
// 5 + 10i     a  + bi
class Complex{
    int a;
    int b;
    //Below lines means that non member - sumComplex function is allowed to do
    //anything with my privete parts (member) 
    friend Complex sumComplex(Complex f1, Complex f2);
public:
    void setNumber(int h1, int h2){
        a = h1;
        b = h2;
    }
    void PrintNumber(){
        cout<<"Your number "<<a<<" + "<<b<<" i "<<endl;
    }

};

Complex sumComplex(Complex f1, Complex f2){
    Complex f3;
    f3.setNumber((f1.a + f2.a), (f1.b + f2.b));
    return f3;
}

int main(){
    
    Complex c1,c2,sum;

    c1.setNumber(1 , 5);
    c1.PrintNumber();

    c2.setNumber(4 , 5);
    c2.PrintNumber();
    
    sum = sumComplex(c1,c2);
    sum.PrintNumber();
    return 0;
}

/*Properties of friend function
1. Not in the scope of class   
2. since it is not in the scope of the class, it cannot be called from the object of 
   that class. c1.sumComplex()==invalid
3. can be invoked without the help of any object
4. Usually contains the objects as arguments
5. can be declear inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to 
   access any member.
*/