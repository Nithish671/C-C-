#include <iostream>
using namespace std;

void myFunction2();

void myFunction() {
    cout << "I just got executed\n";
}

int main() {
    myFunction();
    myFunction();

    //myFunction1();
    myFunction2();

    return 0;
}

void myFunction2() {
    cout << "I will get executed...";
}
/* void myFunction1() {
    cout << "I will not get executed\n";
} */