#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Gojo Satoru";
    string &jjk = name;
    string* ptr = &name;
    
    cout << jjk << endl;
    cout << &jjk <<endl;
    cout << name <<endl;
    cout << ptr <<endl;
    cout << &name <<endl;
    cout << *ptr <<endl;

    return 0;
}