#include <iostream>

class A;

class B {
public:
    void accessAProperties(A &objA);
};

class A {
private:
    int weight;
    double height;
    friend class B; // Declare B as a friend of A

public:
    A(int w, double h) : weight(w), height(h) {}
    friend void B::accessAProperties(A &objA); // Friend declaration for member function of B
};

void B::accessAProperties(A &objA) {
    std::cout << "Weight: " << objA.weight << std::endl; // Access private member of A
    std::cout << "Height: " << objA.height << std::endl; // Access private member of A
}

int main() {
    A objA(60, 6.12);
    B objB;
    objB.accessAProperties(objA); // Call member function of B to access A's properties
    return 0;
}
