#include <stdio.h>

int main() {
    int myNum = 25;
    float myFloat = 25.6;
    char myChar = 'S';

    //printf(x);
    printf("%i\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myChar);

    printf("\n");

    printf("My Favourite Number is : %f\n", myFloat);
    printf("My Favourite Letter is : %c\n", myChar);

    printf("\n");

    printf("My Number is %i and My Letter is %c\n\n", myNum, myChar);

    myNum = 10;

    printf("%i\n", myNum);
    int myOtherNum = 25;
    myNum = myOtherNum;

    printf("%i\n", myNum);

    int myAnotherNum;
    myAnotherNum = myNum;

    printf("%i\n", myAnotherNum);

    int x = 10;
    int y = 11;
    int sum = x + y;

    int a = 25, b = 10, c = 6;

    printf("%i\n", sum);

    printf("%i\n", a + b + c);

    int d, e, f;
    d = e = f = 25;

    printf("%i\n", d + e + f);

    int studentId = 25;
    int studentAge = 22;
    float studentFee = 11.25;
    char studentGrade = 'S';

    printf("The student with Id %i her Age is %i and her Fee is %f, she has %c grade.\n", studentId, studentAge, studentFee, studentGrade);

    return 0;
}