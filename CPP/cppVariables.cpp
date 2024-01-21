#include <iostream>
using namespace std;

int main() {
    int myNum = 15;
    int myNum1;
    myNum1 = 25;
    cout << myNum;
    cout << "\n";
    cout << myNum1;
    myNum = 6;
    cout << "\n";
    cout << myNum << endl;
    cout << "Gojo is " << myNum1 << " years old\n";
    int sum = myNum1 + myNum;
    cout << sum << endl;

    int myNum2 = 10;
    double myFloatNum = 6.25;
    char myLetter = 'S';
    string myText = "Hello";
    bool myBoolean = true;

    cout << myNum2 << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    int x = 25, y = 10, a = 6, b = 11;
    cout << x + y + a + b << endl;

    int c, d, e;
    c = d = e = 25;
    cout << c + d + e << endl;

    int minutePerHour = 60; // Identifier

    int m = 60; // Variable

    cout << minutePerHour << "\n";
    cout << m << "\n";

    const float PI = 3.14;
    //PI = 3.25;
    cout << PI << "\n";

    return 0;
}