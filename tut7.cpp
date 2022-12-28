#include <iostream>

using namespace std;

int main() {
/*Loops in C++
There is 3 types of loops in c++
    1. for loop 
    2. while loop
    3. do while loop
*/

/*For loop*/
//simple ways but you did not use this way its litrilly shit way
// int i=0;
// cout<<i;
// i++;
// cout<<i;
// i++;

//for loop syntex ****

// for(initialization; condition; updation)
// {
//     loop body(C++ code);
// }
//jab hum < less than value dalte hai toh value condition ke 1 value kam tak hi print hoga
//jab hum <= use karte hai toh value condition ke equal hojati hai 
// for (int i = 0; i<= 40; i++) {

//     cout<<i<<endl;
// }
//Example of infinite for loop

// for (int i = 1; 15 <= 20; i++)
// {
//     /* code */
//     cout<<i<<endl;
// }


//*****While loop****** 
// syntex <<<*****
// while(condition){
//     C++statements;
// } 
// int i=1;
// while(i<=40){
//     cout<<i<<endl;
//     i++;
// }

//infinite while loop

// int i=1;
// while(true) {
//     cout<<i<<endl;
//     i++;
// }

/******do while loop*******/
// syntex <<<*****
// do{
//     C++statements;
// } while(condition)

int i=1;

do {
    cout<<i<<endl;
    i++;
    //yeh condition false bhi rahega toh 1 bar run toh karega hi 
}while(false);

    return 0;
}