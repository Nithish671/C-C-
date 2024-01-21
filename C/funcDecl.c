#include <stdio.h>

void myFunction();
int myFunc(int x, int y);

int main() {
    myFunction();
}

void myFunction() {
    printf("I just got executed...\n");

    int result = myFunc(25, 6);
    printf("%d\n", result);
}

int myFunc(int x, int y) {
    return x * y;
}
