/*
? Friend Function

    * Friend functions are not members of a class but have access to its private and protected members.
    * They are declared inside the class using the friend keyword.
    * Friend functions can be defined outside the class to access its private members.
    * They do not have a "this" pointer as they are not called on objects.
    * Friend functions can be regular functions or member functions of other classes.
    * Friendship is not mutual; if class A is a friend of class B, it doesn't imply the reverse.
    * Friend functions violate encapsulation, so their use should be minimized.
    * Friend functions can be used for operator overloading when a non-member function is desired.
    * Friend classes provide access to the private and protected members of another class.
    * Friendship is not inherited; it is not transitive among classes.

? A friend function can be:
    * A global function
    * A member function of another class
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
    int length, width, height;

    friend void setter(Rectangle&, int, int, int);
    friend void getter(Rectangle&);
};


void setter(Rectangle& R, int length, int width, int height){
    R.length = length;
    R.height = height;
    R.width = width;
}

void getter(Rectangle &R){
    cout << "Height : " << R.height << " Width : " << R.width << " Length : " << R.length << "\n";
}


int main(){
    Rectangle R;
    setter(R, 2,4,6);
    getter(R);

}