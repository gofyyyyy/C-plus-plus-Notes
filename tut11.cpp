    /***********Arrays & pointer********/
#include <iostream>
using namespace std;

int main(){
    int marks[] = {34, 45, 46, 89};

    cout<<"These are math marks"<<endl;
    int mathMarks[4];
    mathMarks[0] = 456;
    mathMarks[1] = 345;
    mathMarks[2] = 567;
    mathMarks[3] = 789;

    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // //you can change the value of an array
    // marks[2] = 99;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //for loop example 

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;;
    // }

    //quiz do the same using while and do while loops

    // while example

    // int i = 0;
    // while(i < 4) {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    //do while loop example

    int i = 0;

    do {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i < 4);

    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    //arithmetic
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    return 0;
}