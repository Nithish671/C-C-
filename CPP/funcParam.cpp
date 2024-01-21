#include <iostream>
#include <string>
using namespace std;

int mySum(int x, int y) {
    return x + y;
}

void myFuncMul(string fName, string lName, int age) {
    cout << fName << " " << lName << " is " << age << " years old.\n";
}

void myFuncDef(string country = "India"){
    cout << country << "\n";
}

void myFunc(string fname){
    cout << fname << " Uchiha\n";
}

int main() {

    cout << mySum(25, 6) <<"\n";

    int z = mySum(11 ,10);
    cout << z << "\n";

    myFunc("Sasuke");
    myFunc("Itachi");

    myFuncDef("Japan");
    myFuncDef();
    myFuncDef("Hidden Leaf");

    myFuncMul("Gojo", "Satoru", 20);
    
    return 0;

}