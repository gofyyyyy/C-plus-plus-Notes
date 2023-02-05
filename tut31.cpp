/*******Copy constructor*********/
#include<iostream>
using namespace std;

class Number{
    int a;
public:
    Number(){      // << default constructor bannana jaruri hai 
        a = 0;     
    } 
    Number(int num){
        a = num;
    }
    // When there no copy constructor is found, Compiler supplies own copy constructor(default copy constructor)
    Number(Number &obj){
        cout<<"Copy Constructor!!"<<endl;
        a = obj.a;
    }


    void display(){
        cout<<"the number for this object is "<<a<<endl;
    }
};

int main(){
    Number x , y , z(45), z2;
    x.display();
    y.display();
    z.display();
    //z1 should exactly resemble z or x or y
    Number z1(z);   //Copy constructor invoked          // When there no copy constructor is found, Compiler supplies own copy constructor(default copy constructor)
    z1.display();
    
    z2 = z; // Copy constructor not invoked
    z2.display();

    Number z3 = z; //Copy constructor invoked 
    z3.display();
    return 0;
}