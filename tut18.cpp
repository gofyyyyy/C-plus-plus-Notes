/*****classes public and private access modifiers*****/
#include <iostream>
using namespace std;

class Employee 
{    private:
        int a, b, c;
    public: 
    int d, e;

    void setData(int a, int b, int c); //Declaration   agee mil jayega
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }  
};

void Employee :: setData(int a1, int b1, int c1){

    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee irshad;
    // irshad.a = 456; ---> This will throw error as a is private
    irshad.d = 45;
    irshad.e = 12;
    irshad.setData(1,2,3);
    irshad.getData();

    return 0;
}