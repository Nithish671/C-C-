#include <iostream>
using namespace std;

class MyClass {
    public:
    MyClass() {
        cout << "Hello World\n";
    }
};

class Car {
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};

class Anime {
    public:
    string firstName;
    string lastName;
    int age;

    Anime(string x, string y, int z);
};

Anime::Anime(string x, string y, int z) {
    firstName = x;
    lastName = y;
    age = z;
}

int main() {
    MyClass myObj;

    Car carObj1("Audi", "A8", 2000);
    Car carObj2("BMW", "X5", 2002);

    cout << "I have " << carObj1.brand << " " << carObj1.model << " from " << carObj1.year <<".\n";
    cout << "and I have another " << carObj2.brand << " " << carObj2.model << " from " << carObj2.year << ".\n";

    Anime zoro("Zoro", "Roronoa", 22);
    Anime luffy("Luffy", "Monkey D.", 20);

    cout << "My Name is " << zoro.lastName << " " << zoro.firstName << " and I am " << zoro.age << " years old.\n";
    cout << "My Name is " << luffy.lastName << " " << luffy.firstName << " and I am " << luffy.age << " years old.\n";

    return 0;
}