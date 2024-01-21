#include <iostream>
using namespace std;

class Employee {
    protected:
    int salary;
};

class Programmer : public Employee {
    public:
    int bonus;

    int setSalary(int s) {
        salary = s;
    } 

    int getSalary(){
        return salary;
    }
};

int main() {
    Programmer myObj;

    myObj.setSalary(25000);
    myObj.bonus = 6000;
    int total = myObj.getSalary() + myObj.bonus;

    cout << "Salary : " << myObj.getSalary() << "\n";
    cout << "Bonus : " << myObj.bonus << "\n";
    cout << "Total Salary : " << total << "\n"; 
}
