#include <iostream>
#include <string>
using namespace std;

int main() {
    string anime = "Attack On Titan";
    string &aot = anime;

    cout << anime << endl;
    cout << aot << endl;

    cout << &anime <<endl;
    cout << &aot <<endl;

    return 0;
}