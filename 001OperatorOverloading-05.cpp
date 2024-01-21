#include<bits/stdc++.h>
using namespace std;

class Data{
    public:
        int *data;
        Data(int value){
            data = new int;
            *data = value;
        }
        void setData(int value) {
            *data = value;
        }
        void print(){
            cout << "Data: " << *data << endl;
        }
        ~Data(){
            cout << "Distractor: " << *data << endl;
            delete data;
        }
        // Creating Assignment Operator Overloading
        Data& operator=(const Data& D){
            if(this != &D)*data = *(D.data);
            return *this;
        }
};

int main(){
    Data d1(10),d2(20);
    d2 = d1;
    d1.print();
    d2.print();
    d2.setData(21);
    d1.print();
    d2.print();

    return 0;
}