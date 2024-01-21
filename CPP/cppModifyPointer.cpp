#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Itachi Uchiha";
    string* ptr = &name;

    cout << name <<"\n";
    cout << &name <<"\n";
    cout << *ptr <<"\n";
    cout << "\n";

    *ptr = "Sasuke Uchiha";
    cout << name <<"\n";

    return 0;
}