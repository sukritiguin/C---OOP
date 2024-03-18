#include<iostream>
#include<fstream> // For file handling
using namespace std;


int main(){
    ofstream outputFile("example.txt", ios::app);

    if(outputFile.is_open()){
        outputFile << "\nWe will learn file handling now." << endl;
        outputFile.close();
    }else{
        cout << "Unable to open the file." << endl;
    }

    return 0;
}
