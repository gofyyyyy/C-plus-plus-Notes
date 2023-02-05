#include<iostream>
using namespace std;

class Point{
    int x , y;
public:
    Point(int a, int b){
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
    }
};

int main(){
    Point p(2, 6);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    
    return 0;
}

/* Create a function which takes 2 point objects and computes the distance between those point

*/