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



/*

- Pure Virtual Function

Declaration: Pure virtual functions are declared in a base class with the syntax virtual void functionName() = 0;.

No Implementation: They have no implementation in the base class. They are essentially placeholders for functions that must be implemented in derived classes.

Abstract Class: A class containing at least one pure virtual function becomes an abstract class, which cannot be instantiated.

Forcing Implementation: Pure virtual functions force derived classes to provide their own implementations. This enforces a common interface while allowing different behavior in subclasses.

Override Requirement: Derived classes must override pure virtual functions to become concrete classes. Failure to do so makes the derived class abstract as well.

Polymorphism: Pure virtual functions enable runtime polymorphism, where the appropriate function implementation is determined based on the runtime type of the object.


*/