#include<bits/stdc++.h>
using namespace std;

class Test{
    public:
        Test(){
            cout << "Constructor is called.\n";
        }
    private:
        ~Test(){
            cout << "Private Destructor is called.\n";
        }
};

int main(){

    Test *test = (Test*)malloc(sizeof(Test));

    return 0;
}

/*

- Here just memory is allocated. But program does not call construcor or destructor.

* A private destructor in a C++ class is used to prevent instances of the class from being deleted in certain ways. 
*/