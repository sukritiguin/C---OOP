#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void displayBase1() {
        cout << "Base1 class" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void displayBase2() {
        cout << "Base2 class" << endl;
    }
};

// Derived class inheriting from multiple base classes
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Derived class" << endl;
    }
};

int main() {
    // Create an object of Derived class
    Derived d;

    // Call member functions from both base classes
    d.displayBase1(); // Output: Base1 class
    d.displayBase2(); // Output: Base2 class

    // Call member function from derived class
    d.displayDerived(); // Output: Derived class

    return 0;
}
