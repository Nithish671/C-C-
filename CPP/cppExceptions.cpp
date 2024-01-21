#include <iostream>
using namespace std;

int main() {
    try {
        int age = 17;
        if(age >= 18) {
            cout <<"You are old enough.\n";
        } else {
            //throw(age);
            throw 505;
        }
        } catch(...) {
            cout << "Access denied - You must be at least 18 years old.\n";
            //cout << "Age is : " << myNum;
            //cout << "Error Number : " << myNum;
        }
    return 0;
}