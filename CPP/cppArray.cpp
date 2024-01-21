#include <iostream>
using namespace std;

int main() {
    int myNum[5] = {25, 10, 20, 06, 11};
    int myNumLength = sizeof(myNum)/sizeof(int);

    for(int i = 0; i < myNumLength; i++) {
        cout << myNum[i] <<endl;
    }

    cout <<endl;

    int myNumbers[4] = {25, 10, 20, 06};
    cout << sizeof(myNumbers)/sizeof(int) <<endl;
    cout <<sizeof(int)<<endl;

    string anime[4] = {"Luffy", "Zoro", "Sanji", "Chopper"};
    cout << sizeof(anime) / sizeof(string)<<endl;
    cout <<sizeof(string)<<endl;

    /* string cars[4] = {"Audi", "Mercedez Benz", "Lamborghini", "BMW"};
    int myNum[3] = {25, 10, 20};

    cars[2] = "Rolce Royce";

    cout << cars[2]<<endl; 
    cout << myNum[1] <<endl;
    cout << endl;

    for(int i = 0; i < 4; i++){
        cout << cars[i] <<endl;
    }
    cout <<endl;

    for(int j=0; j < 3; j++) {
        cout << j << " : " << myNum[j] <<endl;
    }
    cout <<endl;

    for(int a : myNum) {
        cout << a <<endl;
    }
    cout << endl;

    string uchihas[4];
    uchihas[0] = "Madara";
    uchihas[1] = "Itachi";
    uchihas[2] = "Sasuke";
    uchihas[3] = "Shisui";   

    for(int d = 0; d < 4; d++) {
        cout << uchihas[d] <<endl;
    } */       
    return 0;  
}