#include <iostream>
using namespace std;

int main() {
    int day = 0;
    switch(day) {
        case 1:
        cout << "Sunday"<<endl;
        break;

        case 2:
        cout << "Monday"<<endl;
        break;

        case 3:
        cout << "Tuesday"<<endl;
        break;

        case 4:
        cout << "Wednesday"<<endl;
        break;

        case 5:
        cout << "Thursday"<<endl;
        break;

        case 6:
        cout << "Friday"<<endl;
        break;

        case 7:
        cout << "Saturday"<<endl;
        break;

        default:
        cout << "The week only has 7 days you moron enter number in between 1-7"<<endl;

    }
    return 0;
}