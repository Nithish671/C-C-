#include <iostream>
using namespace std;

int main() {
    bool iamGood = false;
    bool iamBad = true;

    cout << iamGood << endl;
    cout << iamBad << endl;

    int x = 25;
    int y = 6;

    cout << (x > y) <<endl;
    cout << (25 > 6) <<endl;

    int z = 10;

    cout << (z==10) << endl;

    cout << (10==11) << endl;

    int myAge = 25;
    int votingAge = 18;

    if(myAge >= votingAge) {
        cout << "Old enough to vote..." << endl;
    } else {
        cout << "Not old enough to vote..."<<endl;
    }

    return 0;

}