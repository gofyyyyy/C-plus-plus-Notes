//Friend function example No 1
#include<iostream>
using namespace std;

//Forward declartion 
class Y;

class X{
    int data;
    friend void add(X , Y);
public: 
    void setValue(int value){
        data = value;
    }
};

class Y{
    int num;
    friend void add(X , Y);
public:
    void setValue(int value){
        num = value;

    }
};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects give me "<<o1.data + o2.num;
}

int main(){

    X a1;
    a1.setValue(4);

    Y b1;
    b1.setValue(6);

    add(a1, b1);

    return 0;
}