#include <iostream>
#include <string>
using namespace std;

struct uchiha {
        string name;
        string eye;
        int age;
    };
    
int main() {

    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 25;
    myStructure.myString = "Zoro";

    cout << myStructure.myNum <<endl;
    cout << myStructure.myString <<endl;

    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 2000;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 2002;

    cout << "I have " << myCar1.brand << " " << myCar1.model << " from " << myCar1.year <<".\n";
    cout << "I have another " << myCar2.brand << " " << myCar2.model << " from " << myCar2.year <<".\n"; 

    uchiha sasuke;
    sasuke.name = "Sasuke";
    sasuke.eye = "Eternal mangekyo sharingan and 6-Tomoe Rinnegan";
    sasuke.age = 17;

    uchiha itachi;
    itachi.name = "Itachi";
    itachi.eye = "Mangekyo sharingan";
    itachi.age = 19;

    cout << sasuke.name << " has " << sasuke.eye << " his age is " << sasuke.age <<".\n";
    cout << itachi.name << " has " << itachi.eye << " his age is " << itachi.age <<".\n";


    return 0;
}