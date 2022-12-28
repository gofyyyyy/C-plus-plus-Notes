#include <iostream>
using namespace std;

int main() {
    
    /***********break************/
    // for (int i = 0; i < 4; i++)
    // {
        /* code */
        // cout<<i<<endl;
        // if(i==2){ //<<<<<<<<<<<<<<   0 se 2 tak hi print hoga
        //     //break value ko rok de deta hai jaha ki value hume break karna how aur yeah exit hoke print hojata hai
        //     break;
        // }
        
    //     if(i==2){      //<<<<<<<<<<< isme  0 se 1 tak hi print hoga kiyuke value pehle break karliye humne
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    
        /***********continue************/
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            //        continue main jo value if main rahega usko chodeke sare print hojayega
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}