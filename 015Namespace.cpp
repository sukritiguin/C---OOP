#include<bits/stdc++.h>
using namespace std;

namespace Math{
    double PI = 3.14159;

    double square(double x){
        return x * x;
    }

    int square(int x){
        return x * x;
    }

    class Rectangle{
        private:
            double length;
            double width;
        public:
            Rectangle(double x, double y){
                this->length = x;
                this->width = y;
            }

            double area(){
                return this->length * this->width;
            }

            void displayRectangle(){
                cout << "Rectangle has length " << length << " width " << width << " area " << area() << endl; 
            }
    };
}


int main(){
    cout << "Value of PI: " << Math::PI << endl;
    cout << "Square of 30 is: " << Math::square(30) << endl;
    cout << "Square of 1.26 is: " << Math::square(1.26) << endl;

    Math::Rectangle R(2.14, 3.12);
    R.displayRectangle();


    return 0;
}


/*


In C++, using namespace std; is a directive that allows you to bring all the names from the std
namespace into the current scope. The std namespace is the standard namespace in C++ that contains
many standard library functions, objects, and types provided by the C++ Standard Library.


A namespace in C++ is a feature that allows you to group related declarations
(such as variables, functions, and classes) together under a unique name. This helps to organize
code and prevent naming conflicts, especially in larger projects where multiple libraries or
modules may be used.


*/