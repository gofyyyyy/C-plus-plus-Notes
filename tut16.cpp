#include <iostream>
using namespace std;

int sum(int a , int b){
   
   cout<<"Using function with 2 arguments"<<endl;
    
    return a+b;
}


int sum(int x , int y , int z){
    
    cout<<"Using function with 3 arguments"<<endl;
    
    return x+y+z;
    
}
//Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);   //<<<formula   
}

//Calculate the volume of cube
int volume(int a){
    return(a * a * a); //formula
}

//Rectangular box
int volume(int l , int b , int h){
    return(l*b*h);    //formula
}

int main(){

cout<<"The sum of 4 and 6 is "<<sum(4,6)<<endl;
cout<<"The sum of 3 ,6 ,9 is "<<sum(3,6,9)<<endl;
cout<<"The volume of cylinder radius 4 and height 7 is "<<volume(4,7)<<endl;
cout<<"The volume of cube of side is 6 is "<<volume(6)<<endl;
cout<<"The volume of Rectangle cuboid of 3 , 5 and 6 is "<<volume(3,5,6)<<endl;

    return 0;
}