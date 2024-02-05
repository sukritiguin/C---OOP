#include <iostream>

class Point {
private:
    float x, y;

    // Private constructor
    Point(float x_val, float y_val){
        std::cout << "Private constructor is called" << std::endl;
        this->x = x_val;
        this->y = y_val;
    }

public:
    // Static member function to create instances
    static Point Initialize(float x_val, float y_val) {
        return Point(x_val, y_val);
    }

    // Public member function to display coordinates
    void display() {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
};

int main() {
    // Create Point object using static member function
    Point p = Point::Initialize(1, 2);
    p.display();

    return 0;
}
