#include<bits/stdc++.h>
using namespace std;

// Array Subscript Operator Overloading

class Point{
    public:
        int point[2];

        Point(int x=0, int y=0){
            point[0]=x;
            point[1]=y;
        }

        void print(){
            cout << "x : " << point[0] << " y : " << point[1] << endl;
        }

        int& operator [](int pos){
            if(pos==0)return point[0];
            else if(pos==1)return point[1];
            else{
                cout << "Error! Position out of bound.";
                exit(0);
            }
        }
};


int main(){
    Point p1(2,3), p2(6,7);
    p1.print();
    p1[0] = 10;
    p1.print();
    p2.print();
    p2[1] = 12;
    p2.print();
    // p2[2]=40;
    cout << "p2 at 1st position: " << p2[1] << endl;
    cout << "End....";


    return 0;
}