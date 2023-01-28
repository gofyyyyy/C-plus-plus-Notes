#include<iostream>
using namespace std;

//forward declaration
class c2;

class c1{
    int val1;
    //agar hum &<<ampersiant nhi use karenge toh swap nhi hoga value kiyuke &<<ampersiant addres dee deta hai value na ke copy hota hai value ka 
    friend void swap(c1 & , c2 &);
public:
    void indata(int a){
        val1=a;
    }
    void display(void){
        cout<< val1<<endl;
    }
};

class c2{
    int val2;
    friend void swap(c1 & , c2 &);
public:
    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<< val2<<endl;
    }
};

/*
Trick to swap 2 numbers
temp = a;
a = b;
b = temp;
*/

void swap(c1 & x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(35);
    oc2.indata(78);
    
    swap(oc1, oc2);

    cout<<"The value of c1 after swap becomes: ";
    oc1.display();
    cout<<"The value of c2 after swap becomes: ";
    oc2.display();

    return 0;
}