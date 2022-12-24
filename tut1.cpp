/*Variable scope and Data types*/

#include <iostream>

using namespace std;
//yeah global variable hai
int glo = 5;
void sum() {
    int a;
    //yeah global variable ko close karega i mean run karega 
    cout<<glo;
}

int main() {
    //yeah local variable hai
    int glo = 8;
    // local variabal aur global variabel maine local varibale ka value print hoga i mean presidence local variable ko milega
    glo = 98;
    int a = 6, b = 3;
    float pi = 3.14;
    char q = 'c';
    sum();
    //bool sirf true or false hai agar true rahega toh 1 print karega agar false rahega toh 0 print karega
    bool z= true;
    
    //agar local varibale main value hai toh local variable run karega 
    cout<<glo;
    cout<<"\nThe value of bool:"<<z;
    
    // cout<<"Here the value of a is:"<<a<<"\nThe value of b is:"<<b;
    // cout<<"\nThe value of pi:"<<pi;
    // cout<<"\nThe value of q is:" <<q;
    return 0;
    
}