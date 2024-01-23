/*

** Static member variables and static member functions in C++:

- 1. Static member variables are shared among all instances, providing a single instance for the entire class.
- 2. They are stored in a common memory location shared by all objects.
- 3. Must be declared and initialized outside the class definition.
- 4. Accessed using the class name and the scope resolution operator (`::`).
- 5. Suitable for data shared among all instances, like counters or constants.
- 6. Lifetime extends throughout the program execution.
- 7. Static member functions don't have access to the "this" pointer.
- 8. Can only access static member variables and functions directly.
- 9. Independent of the state of any specific object.
- 10. Often used for utility operations that don't depend on specific instances.
- 11. Both declared using the `static` keyword.
- 12. Contribute to memory efficiency by avoiding redundancy.
- 13. Initialized in the order they are declared, regardless of appearance in the initialization list.
- 14. Useful for representing shared resources, such as counters or configuration settings.



*/


#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    int data;
    Base(int data) : data(data) {}
    static int staticDataMember;
    void display(){
        cout << "Data : " << this->data << endl;
        cout << "Static Data : " << staticDataMember << endl;
    }

    static void displayStaticFunction(){
        cout << "Static Data Member is : " << staticDataMember << "\n";
    }
};

int Base::staticDataMember;

int main(){
    Base b1(10);
    b1.staticDataMember = 11;
    b1.display();
    b1.staticDataMember = 20;
    b1.displayStaticFunction();
    Base::staticDataMember = 21;
    b1.display();


    return 0;
}