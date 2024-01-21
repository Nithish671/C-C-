#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
    return x + y;
}

double plusFuncDouble(double x, double y) {
    return x + y;
}

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}


int main() {
    int myNum1 = plusFuncInt(25, 6);
    double myNum2 = plusFuncDouble(25.6, 6.10);

    int myNum3 = plusFunc(25, 6);
    double myNum4 = plusFunc(25.6, 6.10);

    cout << "Int : " << myNum3 << "\n";
    cout << "Double : " << myNum4 << "\n";

    cout << "Int : " << myNum1 << "\n";
    cout << "Double : " << myNum2 << "\n";

    return 0;
}