#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout << "Base Show Function\n";
        }
        void display(){
            cout << "Base Display Function\n";
        }
        virtual void pureVirtualFunction() = 0;
};

class Derived : public Base{
    public:
        void show(){
            cout << "Derived Show Function\n";
        }
        void display(){
            cout << "Derived Display Function\n";
        }
};


int main(){
    Base *bptr = new Derived();// - Base class pointer is pointed to derived class object
    bptr->display();
    /*
        ** display method is not virtual. So output will be :
        - Base display function
    */
    bptr->show(); // ! Late Binding happends here. Bacuase compiler have to decide which function needs to be called.
    /*
        ** show method is virtual. So output will be :
        - Derived show function
    */

    return 0;
}

/*


? In C++, a virtual function is a member function in a base class that is declared
? with the virtual keyword and is intended to be overridden by derived classes.
? When a virtual function is called through a pointer or reference to a base class,
? the actual function that gets executed is determined dynamically at runtime based
? on the type of the object being referenced or pointed to. This mechanism is known
? as dynamic dispatch or runtime polymorphism.

- Late Binding :
    * In runtime decide which function have to call.

- Early Binding :
    *  In early binding, the decision about which function or method to call is made 
    * by the compiler based on the static type of the object or reference, rather than
    * its dynamic type at runtime.
- Pure virtual function
    virtual void pureVirtualFunction() = 0;
*/