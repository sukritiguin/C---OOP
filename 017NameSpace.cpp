#include<iostream>
using namespace std;

namespace vehicleNP{
    class vehicle{
        public:
            string brand;
            string model;
            int milage;
            int wheelCount;
            int topSpeed;

            vehicle(string brand, string model, int milage, int wheelCount){
                this->brand = brand;
                this->model = model;
                this->milage = milage;
                this->wheelCount = wheelCount;
                this->topSpeed = topSpeed;
            }

            void getDescription(){
                cout << "Descriptio: " << this->brand << " " << this->model << " milage " << this->milage << " wheelCount " << this->wheelCount << " top speed " << this->topSpeed << endl;
            }
    };
    int fn_getMax(int a, int b){
        return a>b?a:b;
    }
    double PI = 3.14159;
}

int main(){
    vehicleNP::vehicle v("TATA Motors", "Nexon", 18, 4);
    v.getDescription();
    cout << vehicleNP::fn_getMax(2,3) << endl;
    cout << vehicleNP::PI<<endl;

    return 0;
}