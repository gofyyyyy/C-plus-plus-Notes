#include <iostream>

using namespace std;

int main(){

int age;
cout<<"Tell me your age"<<endl;

cin>>age;

/********selection control structure: if else-if else ladder*****/
// if((age<18) && (age>0)){

// cout<<"you cannot come to the party"<<endl;
// }else if(age==18) {

//     cout<<"You are kid get to the kid pass to the party"<<endl;  
// }else if(age<1){
//     cout<<"you are not yet born"<<endl;
// }
// else {
//     cout<<"You can come to the party"<<endl;
// }

/********selection control structure: Switch case statement*****/
switch (age)//<<<<age jo variable hai usse check karo
{
case 18:
    /* code */
    cout<<"you are 18"<<endl;
    break;
    case 21:
    /* code */
    cout<<"you are 21"<<endl;
    break;
    case 3:
    /* code */
    cout<<"you are 3"<<endl;
    break;

default:
cout<<"No Special cases"<<endl;
    break;
}


    return 0;
}