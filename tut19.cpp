// OOPS - Classes and objects 

// C++ -->initially called --> C with Classes by stroustroup
// Class is --> extension of structures (in C)
// Structures had limitations
//    -- members are public
//    -- No methods
// Classes --> strctures + more
// Classes --> can have methods and properties
// Classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can decleare object along with the class declartion like this
/*        class Employee{
            //Class defination
        }irshad,cassie,marry;   */
// irshad.salary = 8 make no sense if salary is private

    // Nesting of members functions

#include<iostream>
#include<string>
using namespace std;

class binary{ 

    private:
    string s;
    void chk_bin(void);
    
    public:
        void read(void);
    
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter the binary"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    
    for(int i = 0; i < s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!= '1'){
            cout<< "Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void){
    chk_bin();
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        } else {
            s.at(i) = '0';
        }
    }

}

void binary :: display(void){
    cout<<"Display your binary number"<<endl;
    for(int i = 0; i < s.length(); i++){
        cout << s.at(i);
    }
    cout<<endl;
}


int main(){

 binary b;
 b.read();
//  b.chk_bin(); This is private now
 b.display();
 b.ones_compliment();
 b.display();

    return 0;
}