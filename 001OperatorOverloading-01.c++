#include<bits/stdc++.h>
using namespace std;

class Point{
    public:
        int x, y;
    public:
        Point(int x=0, int y=0) : x{x}, y{y} {}

        Point operator + (const Point& p){
            Point result = Point(x + p.x, y + p.y);
            return result;
        }

        Point add(const Point& p){
            Point result = Point(x + p.x, y + p.y);
            return result;
        }

        Point operator - (const Point& p){
            Point result = Point(x - p.x, y - p.y);
            return result;
        }

        Point subtract(const Point& p){
            Point result = Point(x - p.x, y - p.y);
            return result;
        }

        void print(){
            cout << "x : " << x << ", y : " << y << endl;
        }
};

int main(){
    // Point p1(1,2), p2(3,4);
    // Point p3 = p1 + p2;
    // Point p4 = p1.add(p2);
    // Point p5 = p1-p2;
    // Point p6 = p1.subtract(p2);

    // p1.print();
    // p2.print();
    // p3.print();
    // p4.print();
    // p5.print();
    // p6.print();

    Point p1(1,2), p2(3,4), p3(5,6);
    Point p = p1 + p2 + p3;

    p.print();
}


/*
Operators that can not be overloaded :
1. :: -> Scope Resolution Operator
2. ?: -> Ternary Operator
3. . -> Dot Operator
4. .* -> Pointer Operator
5. sizeof
6. typeid
*/