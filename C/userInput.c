#include <stdio.h>

int main() {
    int myNum;
    printf("Type a number and press enter : \n");
    scanf("%d", &myNum);

    printf("Your number is : %d\n", myNum);

    int num;
    char myChar;

    printf("Type a number AND a character and press enter : \n");

    scanf("%d %c", &num, &myChar);

    printf("Your Number is : %d\n", num);

    printf("Your letter is : %c\n", myChar);

    return 0;
}