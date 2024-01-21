#include <iostream>
using namespace std;

void funcArr (int numbers[7]) {

    for(int i = 0; i < 7; i++) {
        cout << numbers[i] << "\n";
    }
}



void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {

    int myNumbers[7] = {1, 2, 3, 4, 5, 6, 7};

    funcArr(myNumbers);

    int firstNum = 25;
    int secondNum = 6;

    cout << "Before Swap : \n" ;
    cout << firstNum <<"\n"<< secondNum <<"\n";

    cout << "\n";

    cout << "After swap : \n";
    swapNums(firstNum, secondNum);

    cout << firstNum <<"\n"<< secondNum <<"\n";
}