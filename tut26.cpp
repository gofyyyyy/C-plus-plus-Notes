/**Constructor**/
#include<iostream>
using namespace std;

class Complex{
    int a , b;
public:
    //Creating a constructor
    //Constructor is a special member function with the  same name as of the class.
    //it is used intialize the objects of its class
    //It is automatically invoked whenever an object is created
    
    Complex(void); //Constructor declaration

        void PrintNumber(){
        cout<<"Your number "<<a<<" + "<<b<<" i "<<endl;
    }


};

Complex ::Complex(void)//-----> This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
    cout<<"Hi"<<endl;
}


int main(){
    Complex c1, c2, c3;
    c1.PrintNumber();
    c2.PrintNumber();
    c3.PrintNumber();
    return 0;
}

/* Characteristics of Constructor
 1. It should be declared in the public section of the class
 2. they are automatically invoked whenever the objects is created
 3. They cannot return values and do not have return types
 4. It can have a default argument
 5. we cannot refer to their address
 */