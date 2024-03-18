#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ifstream inputFile("example.txt");
    if(inputFile.is_open()){
        string line;
        while(getline(inputFile, line)){ # read the file line by line
            cout << line << endl;
        }
        inputFile.close();
    }else{
        cout << "Unable to open the file.\n";
    }

    return 0;
}