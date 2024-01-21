#include <iostream>
using namespace std;

int main() {
    int x = 25 + 6;
    cout << x << "\n";

    int mul = 25 * 6;
    int div = mul / 10;
    int sub = div - 11;
    int mod = sub % 2;

    cout << mul << "\n";
    cout << div << "\n";
    cout << sub << "\n";
    cout << mod << endl;
    cout << ++mod << endl;
    cout << --mod << endl;


    return 0;
}