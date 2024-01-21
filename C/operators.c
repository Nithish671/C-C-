#include <stdio.h>

int main() {
    int myNum = 100 + 50;

    printf("%d\n", myNum);
    printf("%d\n", 100 + 50);
    printf("\n");

    int sum1 = 100 + 50;
    int sum2 = sum1 + 250;
    int sum3 = sum2 + sum2;

    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);

    printf("\n");

    int x = 25;
    int y =  6;
    
    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n", x / y);
    printf("%d\n", x % y);
    printf("%d\n", x++);
    printf("%d\n", x--);

    return 0;
}