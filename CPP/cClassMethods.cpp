#include <iostream>
using namespace std;

class MyClass {
    public:
    void myMethod() {
        cout << "Hello World\n";
    }
};

class MyClass1 {
    public:
    void myMethod();
};

void MyClass1::myMethod() {
    printf("Hello World!\n");
}

class Car {
    public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    MyClass myObj;
    myObj.myMethod();

    MyClass1 myObj1;
    myObj1.myMethod();

    Car myCar;
    cout << myCar.speed(200) << "\n"; 

    return 0;
}