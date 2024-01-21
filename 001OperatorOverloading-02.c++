#include<bits/stdc++.h>
using namespace std;

class Point{
    public:
        int x, y;

        Point(int x=0, int y=0): x{x}, y{y} {}

        void print(){
            cout << x << ", " << y << endl;
        }

        Point operator -(){
            return Point(-x, -y); 
        }

};

int main(){
    Point p1(1,2), p2(2,3);
    Point p3 = -p2;
    p2.print();
    p3.print();

    return 0;
}