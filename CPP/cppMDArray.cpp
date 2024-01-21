#include <iostream>
using namespace std;

int main() {
    string letters[2][5] = {
        {"A", "B", "C", "D", "E"}, 
        {"F", "G", "H", "I", "J"}
        };

        cout << letters[1][1]<<endl;

        string myLetters[2][2][2] = {
            {
                {"A", "B"}, {"C", "D"} 
            },
            {
                {"E", "F"}, {"G", "H"}
            } 
        };

        cout << myLetters[1][1][0]<<endl;

        letters[1][3] = "N";
        myLetters[1][1][1] = "S";

        cout << letters[1][3];
        cout << myLetters[1][1][1] <<endl;

        cout << endl;

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 5; j++) {
                cout << letters[i][j]<<endl;
            }
        }

        cout << endl;

        for (int x = 0; x < 2; x++){
            for(int y = 0; y < 2; y++) {
                for (int z = 0; z < 2; z++) {
                    cout << myLetters[x][y][z]<<endl;
                }
            }
        }
        return 0;
}