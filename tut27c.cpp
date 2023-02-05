/** Parameterized Constructor**/
#include<iostream>
#include<math.h>       //search sqrt(square root) math
using namespace std;

class Point{
    int x;
    int y;
friend void difference(Point, Point);
public:
    Point(int a, int b){
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<<"The point is :("<<x<<","<<y<<")"<<endl;
    }


};

void difference(Point f1, Point f2){
    int x_diff = (f2.x-f1.x);    //(x2 – x1)²
    int y_diff = (f2.y-f1.x);    //(y2 – y1)²
    double dist = sqrt(pow(x_diff,2) + pow(y_diff,2));        //((x2 – x1)² + (y2 – y1)²) formula of square root
    cout<<"Distance is: " <<dist<<  "units";
    }

int main(){

    Point f1(1,0),f2(70, 0);
    f1.displayPoint();
    f2.displayPoint();

    cout<<endl<<endl;
    difference(f1,f2);
    
    return 0;
}