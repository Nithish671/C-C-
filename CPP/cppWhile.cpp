#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    cout << "\n""\n";

    int j = 7;

    do {
        cout << j <<"\n";
        j++;
    } while(j < 5);
    return 0;
}