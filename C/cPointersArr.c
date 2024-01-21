#include <stdio.h>

int fun() {
    int j = 10;
}

int main() {
    int myNum[4] = {25, 10, 6, 11};

    for(int i = 0; i < 4; i++) {
        printf("%d\n", myNum[i]);
    }

    for(int j = 0; j < 4; j++) {
        printf("%p\n", &myNum[j]);
    } 

    printf("%p\n", &myNum);
    printf("%p\n", &myNum[0]);

    printf("%d\n", *myNum);
    printf("%d\n", *(myNum + 2));

    int* ptr = myNum;
    for(int a = 0; a < 4; a++) {
        printf("%d\n", *(ptr + a));
    }

    printf("\n");
    *myNum = 10;
    *(myNum + 1) = 25;

    printf("%d\n", myNum[0]);
    printf("%d\n", *(myNum + 1));

    for(int b = 0; b < 4; b++) {
        printf("%d\n", *(myNum + b));
    }
    int j = 20;
    fun();
    printf("%d", j);
}