#include <stdio.h>

int main() {
    /* int myNum = 25;
    float myFloat = 25.6;
    char myLetter = 'S';
    double myDouble = 10.11;
    char greeting[] = "Hello World";

    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%.1f\n", myFloat);
    printf("%c\n", myLetter);
    printf("%lf\n", myDouble);
    printf("%.2lf\n", myDouble);
    printf("%s", greeting); */

    int x = 25;
    int y = 6;
    int sum = x / y;

    float myFloat = 25;
    int myInt = 25.6;

    printf("%d\n", sum);

    printf("%f\n", myFloat);

    printf("%d\n", myInt);

    float mySum = 25 / 6;

    printf("%f\n", mySum);

    float mySum1 = (float) 25 / 6;

    printf("%f\n", mySum1);

    float sum1 = (float) x / y;

    printf("%f\n",sum1);

    printf("%.2f\n", sum1);
    return 0;
}