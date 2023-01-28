//Static Data Member & Methods
#include<iostream>
using namespace std;

class Employe{
    int id;
    //static varible ab ek class ka property hogaya hai islye yeha dusre object main by default 0 print karega agar increment karna ho to is toh count++; or count=any number;  
    static int count;   //by default statice variable ki value 0 hoti hai
public:
    void setData(void){
        cout<<"Enter id"<<endl;
        cin>>id;
        count++;   //statice varible ko increment kardiya jise value update hojayega
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getCount(void){
        // cout<<id;  this will throw error
        cout<<"The value of count is "<<count<<endl;
    }
};
            //count is the static data member of class Employee
//agar statice variable ki value apne maan se badana ho toh idhar pe value change kar sakte hai class main se error ayega
int Employe:: count;  //default value is 0

int main(){

    Employe irshad, john, rock;
    // irshad.id=1;
    // irshad.count=1;  //cannot do this as id and count are private
    irshad.setData();
    irshad.getData();
    Employe::getCount(); // isko direct run kare 
    
    john.setData();
    john.getData();
    Employe::getCount();

    rock.setData();
    rock.getData();
    Employe::getCount();
    return 0;
}