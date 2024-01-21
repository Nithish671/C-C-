#include <stdio.h>

int main() {
    int myNumbers[] = {1, 2, 3, 4};
    printf("%d\n", myNumbers[2]);

    myNumbers[2] = 5;

    printf("%d\n", myNumbers[2]);

    printf("\n");
    for(int i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    } 

    printf("\n");

    int myNum[3];

    myNum[0] = 25;
    myNum[1] = 10;
    myNum[2] = 20;

    for(int j = 0; j < 3; j++) {
        printf("%d\n", myNum[j]);
    }
    printf("\n");

    int myArr[2][3] = {
        {1, 2, 3}, {4, 5, 6}
        };
    printf("%d\n", myArr[1][1]);
    printf("\n");

    myArr[1][1] = 25;
    printf("%d\n", myArr[1][1]);
    printf("\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\n", myArr[i][j]);
        }
    }

    return 0;
}