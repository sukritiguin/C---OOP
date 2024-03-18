#include<bits/stdc++.h>
using namespace std;

class Base{
    protected:
        int val;
};

class derived1: public Base{
    public:
        derived1(){
            val = 1;
        }
};

class derived2: public Base{
    public:
        derived2(){
            val = 2;
        }
};

class derived3: public derived1, public derived2{
    public:
        void getValue(){
            // cout << "Value: " << val << endl; // This will cause ambiguity problem
            cout << "Value from derived1: " << derived1::val << endl;
            cout << "Value from derived2: " << derived2::val << endl;
        }
};


int main(){
    derived3 d;
    d.getValue();

    return 0;
}