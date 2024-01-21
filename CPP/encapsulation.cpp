#include <iostream>
using namespace std;

class MyClass {
    private:
    int salary;

    public:
    int setSalary(int s) {
        salary = s;
    };

    int getSalary() {
        return salary;
    } 
};

int main() {
    MyClass myObj;

    myObj.setSalary(25000);

    cout << myObj.getSalary() << "\n";

    return 0;    
}