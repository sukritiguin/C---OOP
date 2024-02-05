#include<bits/stdc++.h>
using namespace std;

class Test{
    private:
        ~Test(){
            cout << "Private destructor is called.\n";
        }
};

int main(){
    Test test;
    return 0;
};

/*

* error

007PrivateDestructor2.cpp:12:10: error: 'Test::~Test()' is private within this context
   12 |     Test test;
      |          ^~~~
007PrivateDestructor2.cpp:6:9: note: declared private here
    6 |         ~Test(){
      |         ^

- The compiler notices that the local variable ‘test’ cannot be destructed because the destructor is private. 

*/