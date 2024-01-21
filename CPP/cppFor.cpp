#include <iostream>
using namespace std;

int main() {

    int i;
    for (i = 0; i <= 3; i++) {
        cout << i <<"\n";

        for (int j = 0; j <= 3; j++) {
            cout << j <<endl;
        }
    }

    cout << endl;

    int myNumbers[5] = {25, 10, 20, 00, 00};

    for(int i : myNumbers) {
        cout << i <<endl;
    }

    /* for(i = 0; i <= 10; i = i + 2){
        cout << i <<"\n";
    } */

    /* for(int i = 0; i < 10; i++) {
        if(i == 7) {
            continue;
        }
        cout << i <<endl;   
    } */
    return 0;
}