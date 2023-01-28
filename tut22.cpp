//Array of object & passing object
#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
public:
    void setId(void){
        salary=3456;
        cout<<"Enter the id"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};

int main(){
    
    // Employee irshad,john,max,mad;
    // irshad.setId();
    // irshad.getId();

    Employee fb[4];
    for(int i=0; i < 4; i++){
        fb[i].setId();
        fb[i].getId();
    }
 
    return 0;
}