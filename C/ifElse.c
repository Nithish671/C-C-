#include <stdio.h>

int main() {
    if(25 > 6) {
        printf("25 is greater than 6.\n");
    }

    printf("\n");

    int x = 25;
    int y = 6;
    if(x > y) {
        printf("%d is greater than %d.\n", x, y);
    } else {
        printf("%d is greater than %d.\n", y, x);
    }

    printf("\n");

    int time = 20;
    if(time < 13) {
        printf("Good Morning.\n");
    } else {
        printf("Good Afternoon\n");
    }

    printf("\n");

    int myTime = 20;

    if(myTime < 13) {
        printf("Good Morning.\n");
    } else if (myTime < 19) {
        printf("Good Evening\n");
    } else {
        printf("Good Night\n");
    }

    printf("\n");

    int myNumber = 25;

    if(myNumber < 0) {
        printf("The number is \"Negative\" number.\n");
    } else if(myNumber > 0) {
        printf("The number is \"Positive\" number.\n");
    } else {
        printf("The number is \"Zero\".\n");
    }

    int myTime1 = 10;

    (myTime1 < 19) ? printf("Day Time\n") : printf("Night Time\n");

    return 0;
}