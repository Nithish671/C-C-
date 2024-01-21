#include <iostream>
using namespace std;

int main() {
    bool ships[4][4] = {
        {
            0, 0, 1, 0
        },
        {
            1, 0, 0, 0 
        },
        {
            0, 1, 0, 0
        },
        {
            0, 0, 0, 1
        }
    };

    int hits = 0;
    int numberOfTurns = 0;

    while(hits < 4) {
        int row, column;

        cout << "Select the Coordinates : " <<endl;
        cout << "Choose a row number between 3 : ";
        cin >> row;

        cout << "Choose a column number between 3 : ";
        cin >> column;

        if(ships[row][column]) {
            ships[row][column] = 0;

            hits++;

            cout << "Hit! " << (4 - hits) << "left.\n\n"; 
        } else {
            cout << "Miss\n\n";
        }
        numberOfTurns++;

    }

    cout << "You won in " << (numberOfTurns) << " turns" <<endl;
};