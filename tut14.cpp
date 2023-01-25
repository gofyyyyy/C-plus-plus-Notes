#include <iostream>
using namespace std;

 inline int product(int a , int b) {
        //static kabhi use mat karna inline function main nhi toh confusion hoga
        // static int c=0; //This execute only one time
        // c = c + 1; // The value of c is increment after run
        return a*b;
    }

    float moneyReceived(int currentmoney, float factor= 1.05){
        return currentmoney * factor;
    }
    
    //const means ek value ko hume permanent rakhna hai take uski value change na koi kar paya aur na ho 
    // int strlen(const char *p)7


int main(){
    
    int a , b;

    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    //default arguments
    int money = 100000;   
    cout<<"if you have "<<money<<" Rs in your bank  account, you will recieve "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"for vip: if you have "<<money<<" Rs in your bank account, you will receive"<<moneyReceived(money, 1.1)<<" Rs after 1 year"<<endl;

    return 0;
}
