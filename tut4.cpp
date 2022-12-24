//**Refrence Variable and typecasting
#include <iostream>

using namespace std;
//this is global variable
int c =45;
int main (){
//****************Build in Data types*************************
    
//   int a, b , c;

// cout<<"Enter The value of a:"<<endl;
// cin>>a;
// cout<<"Enter The value of b:"<<endl;
// cin>>b;

// c= a + b;

// cout<<"The sum is"<<c<<endl;
// // :: << this is scope resulation
// cout<<"The global c is:"<<::c<<endl;


//****************float, double and long double Literals *************************


// float d = 34.4f;
// long double e = 34.4l;
// cout<<"The value of 34.4 is"<<sizeof(34.4)<<endl;
// cout<<"The value of 34.4f is"<<sizeof(34.4f)<<endl;
// cout<<"The value of 34.4F is"<<sizeof(34.4F)<<endl;
// cout<<"The value of 34.4l is"<<sizeof(34.4l)<<endl;
// cout<<"The value of 34.4L is"<<sizeof(34.4L)<<endl;


// cout<<"The value of d: "<<d<<endl<<"The value of e:"<<e;

//****************Refrence Variable*************************
//example alag alag naam se ek hi insaan bolate hai 
// cassendra cage ---> cassie ----> cassie cage

// float j = 321;
// float & s = j;

// cout<<j<<endl;
// cout<<s<<endl;

//****************Typecasting*************************
//converting int to double, float etc.

int a = 45;
float b =46.46;

cout<<"The value of a is "<<(float)a<<endl;
cout<<"The value of a is"<<float(a)<<endl;

cout<<"The value of b is"<<(int)b<<endl;
cout<<"The value of b is"<<int(b)<<endl;
int c = int(b);

cout<<"The expression is"<<a + b<<endl;
cout<<"The expression is"<<a + int(b)<<endl;
cout<<"The expression is"<<a + (int)b<<endl;                                                                                                                                                        


    return 0;
}