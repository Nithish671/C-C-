#include <iostream>
#include <string>
using namespace std;

class MulIn {
    public:
    void myMethod() {
        cout << "Some content in first class\n";
    };
};

class MulIn1 {
    public:
    void myOtherMethod() {
        cout << "Some content in second class.\n";
    }
};

class MulIn2 {
    public:
    void myAnotherMethod() {
        cout << "Two class is enough then why three.\n";
    }
};

class MulChild: public MulIn, public MulIn1, public MulIn2 {
};

class Vehicle {
    public:
    string brand = "Ford";

    void honk() {
        cout << "Tuut , tuut !\n" ;
    }
};

class Car: public Vehicle {
    public:
    string model = "Mustang";
};

class MyClass {
    public:
    void myFunction() {
        cout << "Some content in parent class.\n";
    }
};

class MyChild: public MyClass {
};

class MyGrandChild: public MyChild {
};

int main() {
    Car myCar;
    myCar.honk();

    MulChild objMul;

    objMul.myMethod();
    objMul.myOtherMethod();
    objMul.myAnotherMethod();

    MyGrandChild myObj;
    myObj.myFunction();

    cout << myCar.brand + " " + myCar.model <<"\n";
    return 0;
}