#include<bits/stdc++.h>
using namespace std;

// Stream Insertion and Extraction Operator Overloading

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

        friend ostream& operator<<(ostream& os, const Point& p);
        friend istream& operator<<(istream& is, Point& p);
};

ostream& operator<<(ostream& os, const Point& p){
    os << "x : " << p.point[0] << " y : " << p.point[1] << endl;
    return os;
}

istream& operator>>(istream& is, Point& p){
    is >> p.point[0] >> p.point[1];
    return is;
}


int main(){
    Point p;
    cout << "Give Input x and y: ";
    cin >> p;
    cout << p;
}