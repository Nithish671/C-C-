#include <iostream>
#include <string>
using namespace std;

class MyCar {
    public:
    string brand;
    string model;
    int year;
};

class MyClass {
    public:
    int myNum;
    string myString;
};

int main() {
    MyClass myObj;

    myObj.myNum = 25;
    myObj.myString = "Zoro";

    cout << "My Number is " << myObj.myNum <<"\n";
    cout << "My Name is " << myObj.myString<<"\n";

    MyCar car1;
    MyCar car2;

    car1.brand = "Audi";
    car1.model = "A8";
    car1.year = 2002;

    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 2000;

    cout << "I have " << car1.brand << " " << car1.model << " from " << car1.year << ".\n";
    cout << "I have another " << car2.brand << " " << car2.model << " from " << car2.year << ".\n"; 

    return 0;
}