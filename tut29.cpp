/**Constructor with default argument**/
#include<iostream>
using namespace std;

class Simple{
    int data1, data2, data3;
public:
    Simple(int a=34 , int b=45 , int c=56){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();

};

void Simple:: printData(){
    cout<<"The value of data 1 , data 2 amd data 3 is "<<data1<<","<<data2<<" and "<<data3<<endl;
}

int main(){
    // Simple s(1,3,5);
    // s.printData();
    Simple g;             //by default value exucute here
    g.printData();
    return 0;
}