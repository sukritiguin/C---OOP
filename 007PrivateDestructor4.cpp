#include<bits/stdc++.h>
using namespace std;

class Test{
    private:
        ~Test(){
            cout << "Private destructor is called.\n";
        }
    public:
        friend void destructTest(Test*); // - Destruct using friend function
        void destruct() { delete this; } // - Destruct using member function
};

/*
TODO : For Dynamically allocated memory we should delete it.
*/
void destructTest(Test* ptr){
    delete ptr;
}

int main(){
    Test *test = new Test;
    destructTest(test);
    Test *test2 = new Test;
    test2->destruct();
    return 0;
};

/*

* Output : Private destructor is called.
- This program also works fine.
- When object is created dynamically using New keyword. So it is the programmer's responsibility to delete it.

*/

