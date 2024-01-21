#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if(i == 5) {
            break;
        }
        cout << i <<endl;
    }
    
    cout << endl;

    for(int j = 0; j < 10; j++) {
        if(j == 5) {
            continue;
        }
        cout << j <<endl;
    }

    cout <<endl;

    int a = 0;
    while(a < 10) {
        cout << a <<endl;
        a++;
        if(a == 5) {
            break;
        }
    }

    cout <<endl;

    int b = 0;
    while(b < 10) {
        if(b == 5) {
            b++;
            continue;
        } 
        cout << b <<endl;
        b++;   
    }
    return 0;
}