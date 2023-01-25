#include<iostream>
using namespace std;

    class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void) { counter = 0;}
    void setPrice(void);
    void displayPrice(void);
    };
void Shop :: setPrice(void){
    cout<<"Enter Id your item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop:: displayPrice(void){
    for(int i =0; i < counter; i++){
        cout<<"Total price"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    
Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}




// #include<iostream>
// using namespace std;

// typedef class ChikenShop{

// int Chk_Iditem[100];
// int Chk_Price[100];
// int counter;

// public:

// void Chitem(void) { counter = 0;}
// void SetChkPrice(void);
// void displayPrice(void);

// }cp;

// void cp :: SetChkPrice(void){
//     cout<<"Enter Iditem "<<counter+1<<endl;
//     cin>>Chk_Iditem[counter];
//     cout<<"Enter Price of item"<<endl;
//     cin>>Chk_Price[counter];
//     counter ++;
// }

// void cp :: displayPrice(void){
//     for (int i = 0; i < counter; i++){
//         cout<<"Total chicken price is  "<<Chk_Iditem[i]<<" is "<<Chk_Price[i]<<endl;
//     }
// }


// int main(){
    
//     cp qwe;
//     qwe.Chitem();
//     qwe.SetChkPrice();
//     qwe.SetChkPrice();
//     qwe.SetChkPrice();
//     qwe.SetChkPrice();
//     qwe.displayPrice();

//     return 0;
// }