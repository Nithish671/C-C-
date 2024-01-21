#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 11;
    cout << (x < y && y > x) <<endl;
    cout << (x > y && y >x) <<"\n\n";
    
    cout << (x > y || y > x) <<endl;
    cout << (x > y || y < x) <<endl;

    cout << (!(x > y && y > x)) <<endl;
    cout << (!(x < y && y > x)) <<endl;
}