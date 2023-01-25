#include <iostream>
using namespace std;

//Function prototype
//type function-name (arguments);    main 

// int sum(int a , int b); //-->Acceptable
// int sum(int a , b); //--> Not Acceptable
int sum(int , int); //-->Acceptable         << sum agge hai Assorite deta hai
 void g(void);

int main() {

    int num1, num2;
    
    cout<<"Enter first number "<<endl;
    cin>>num1;

    cout<<"Enter second number "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    
    cout<<"The sum is "<<sum(num1,num2)<<endl;

    g();

    return 0;
}
 int sum (int a , int b){
    //Formal parameters a and b will be taking value from actual parameters
        int c = a + b;
        return c;
    }

//agar bar bar cout kar ke tak gaye hai to yeah use kare

void g() {
    cout<<"\nlero,lero";
}


