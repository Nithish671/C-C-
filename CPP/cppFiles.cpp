#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream MyWriteFile("demo.txt");

    MyWriteFile << "Files can be tricky, but it is fun enough!";

    MyWriteFile.close();

    string text;

    ifstream MyReadFile("demo.txt");

    while(getline(MyReadFile, text)) { 
        cout << text;
    }
    MyReadFile.close();
}