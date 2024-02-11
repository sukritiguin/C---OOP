/*
Member Functions in Classes
There are 2 ways to define a member function:
    1. Inside class definition
    2. Outside class definition
To define a member function outside the class definition we have to use the scope resolution::
operator along with the class name and function name. 
*/

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string id;
    string address;

    void printDetails();

    void setter(string name, string id, string address){
        this->name = name;
        this->id = id;
        this->address = address;
    }
};

void Student::printDetails(){
    cout  << "Student Name: " << name << endl;
    cout << "Student Address: " << address << endl;
    cout << "Student ID: " << id << endl;
}



int main(){

    Student s;
    s.setter("Sukriti", "10900320033", "Nirol, Katwa, 713140, WB, Ind");
    s.printDetails();

    return 0;
}