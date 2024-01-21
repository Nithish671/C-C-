#include <iostream>
using namespace std;

int main() {
    int x = 25;
    cout << x <<endl;
    x += 6;
    cout << x << endl;
    x -= 6;
    cout << x <<endl;
    x *= 6;
    cout << x <<endl;
    x /= 6;
    cout << x <<endl;
    x %= 6;
    cout << x <<endl;
    
    int y = 10;
    y &= 11;
    cout << y <<endl;

    y |= 11;
    cout << y <<endl;

    y ^= 10;
    cout << y <<endl;

    y <<= 2;
    cout << y << endl;

    y >>= 2;
    cout << y <<endl;


    return 0;
}