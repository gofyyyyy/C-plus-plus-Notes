#include <iostream>
using namespace std;

    //structure
typedef struct employee
{
    /*data*/
    int eId;
    char favChar;
    float salary;
    //typedef matlab jisko main struck employee bolta tha usko ep bolna cahta hu
}ep;

    //union 
union money      //sirf ek time pe ek bar hi istemal kar sakte hai
{                //teeno main se sirf ek bar hi use karsakte nhi toh garbage value 99 dikayega
    int rice;       //4byte
    char car;       //1byte
    float pounds;   //4byte


};

int main(){
    //***structure***
    // ep irshad;
    // irshad.eId = 1;
    // irshad.favChar = 'c';
    // irshad.salary = 120000000;

    // cout<<"The value is "<<irshad.eId<<endl;
    // cout<<"The value is "<<irshad.favChar<<endl;
    // cout<<"The value is "<<irshad.salary<<endl;
    
    /*****unioun*****/
//    union money m1;
//     m1.rice = 23;
//     m1.car= 'c';
//     cout<<m1.car;

    //****Enmus*****

enum Meal{breakfast, lunch, dinner};\
    Meal m1 = lunch;
    cout<<(m1==1);


    return 0;
}