#include<bits/stdc++.h>
using namespace std;

class Base{
    protected:
        int val;
};

class derived1: virtual public Base{
    public:
        derived1(){
            val = 1;
        }

        int getValue(){
            return val;
        }
};

class derived2: virtual public Base{
    public:
        derived2(){
            val = 2;
        }
        
        int getValue() {
            return val;
        }
};

class derived3: public derived1, public derived2{
    public:
        void getValue(){
            // cout << "Value: " << val << endl; // This will cause ambiguity problem
            cout << "Value from derived1: " << derived1::getValue() << endl;
            cout << "Value from derived2: " << derived2::getValue() << endl;
        }
};


int main(){
    derived3 d;
    d.getValue();

    return 0;
}

/*

Virtual inheritance in C++ is a mechanism used to address the "diamond problem" that arises in multiple inheritance. When a class is virtually inherited, only one instance of the base class is shared among all the derived classes in the inheritance hierarchy. This ensures that ambiguous base class members are not duplicated, resolving ambiguity and reducing memory overhead. Virtual inheritance is achieved by declaring the base class as virtual in the inheritance hierarchy.


*/