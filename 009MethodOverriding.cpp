#include<bits/stdc++.h>
using namespace std;

class baseClas{
    public:
        void display(){
            cout << "Base Class\n";
        }
};

class DerivedClass:public baseClas{
    public:
        void display(){
            cout << "Derive Class\n";
        }
};

int main(){
    DerivedClass obj;
    obj.display();

    return 0;
}

/*

! DerivedClass::display() method is overridden BaseClass::display() method
*/