#include<bits/stdc++.h>
using namespace std;

class Test{
    private:
        ~Test(){
            cout << "Private destructor is called.\n";
        }
};

int main(){
    Test *test;
    return 0;
};

/*

- The above program works fine.
- There is no object being constructed, the program just creates a pointer of type “Test *”, so nothing is destructed.

*/