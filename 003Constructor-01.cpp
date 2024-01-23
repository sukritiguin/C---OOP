/*
003Constructor-01.cpp
============================================================================

? Characteristics of constructor

    • The name of the constructor is same as its class name.
    • Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
    • Constructors do not return values; hence they do not have a return type.
    • A constructor gets called automatically when we create the object of the class.
    • Constructors can be overloaded.
    • Constructor can not be declared virtual.

? Types of constructor

    • Default constructor : Created by compiler by default when we do not have a constructor in the public section of the class
    • Parameterized constructor : Accept parameter and assign values to the member variable of the class
    • Overloaded constructor : When constructor have multiple form
    • Constructor with default value : Initializes the object's data members with specified default values if no arguments are provided during the object's creation.
    • Copy constructor : Creates a new object by copying the values of another object of the same type.
    • Inline constructor :  Defined within the class declaration, with its implementation provided directly in the class definition

? A constructor is different from normal functions in following ways: 

    Constructor has same name as the class itself
    Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
    Constructors don’t have return type
    A constructor is automatically called when an object is created.
    It must be placed in public section of class.
    If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).
*/

/*
TODO : Default Constructor, Inline Constructor, Overloaded Constructor and Parametarized Constructor and Constructor with default values : All will be convered in this example code
*/

#include<bits/stdc++.h>
using namespace std;

class Box{
    public:
    int length;
    int width;
    int height;

    // TODO : Default Constructor

    Box(){
        this->length = 0;
        this->height = 0;
        this->width = 0;

        cout << "Default Constructor is called" << endl;
    }

    // TODO : Parameterized constructor
    /*
    Box(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;      

        cout << "Parametarized Constructor is called.\n"; 
    }
    */

    // TODO : Inline Constructor
    // ! Apply when no parameratized constructor is defined
    Box(int l, int w, int h) : length(l), width(w), height(h){
        cout << "Inline Constructor is called.\n";
    }

    // TODO : Overloaded Constructor

    Box(int side){
        this->length = this->width = this->height = side;
        cout << "Overloaded Constructor is called.\n";
    }

    // TODO : Constructor with default value
    // ! You should declare only when other parametarized constructor is not implemented
    /*
    Box(int length=11, int width=11, int height=11){
        this->length = length;
        this->width = width;
        this->height = height;      

        cout << "Parametarized Constructor with default is called.\n"; 
    }
    */

    void printDetails(); // ? Membership Function defined outside of the class
};

void Box::printDetails(){
    cout << "Length: " << length << " Width: " << width << " Height: " << height << "\n";
}


int main(){

    Box b1;
    Box b2(3,7,9);
    Box b3(10);

/* 

! Ambiguous Constructor Call:

? The line Box b3(10); is causing an ambiguity because there are two constructors that could match the argument 10: the parameterized constructor
? Box(int side) and the constructor with default values Box(int length=11, int width=11, int height=11).
? To resolve this ambiguity, you can either remove the parameterized constructor or provide values for all three parameters.

*/

    b1.printDetails();
    b2.printDetails();
    b3.printDetails();

    return 0;
}

