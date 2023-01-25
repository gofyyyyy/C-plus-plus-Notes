#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}
//This will not swap a and b
void swap(int a , int b){ //temp a b
    int temp = a;        //4    4 5
    a = b;               //4    5 5
    b = temp;            //4    5 4
}
//call by refrence using pointers
void swapPointer(int* a , int* b){ //temp a b
    int temp = *a;        //4    4 5
    *a = *b;               //4    5 5
    *b = temp;            //4    5 4
}
//call by reference using C++ reference Variable
//int &
void swapReferenceVar(int &a , int &b){ //temp a b
    int temp = a;        //4    4 5
    a = b;               //4    5 5
    b = temp;            //4    5 4
  //retuen a;
}

int main(){
    int x = 3 , y = 5; //value doesnt change because actuall argument only copy through the swap paramater
    // cout<<"The sum of x and y is"<<sum(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is"<<y<<endl;
    // swap(x,y); //This will not swap a and b
    // swapPointer(&x, &y); //isse value swap hojayegi kiske liye humne direct address pe target kiya tha This will swap a and b using pointer
    swapReferenceVar(x, y); //this will be swap a and b using reference variables
    // swapReferenceVar(x, y) = 546456;
    cout<<"The value of x is "<<x<<" amd the value of y is"<<y<<endl;  
    return 0;
}