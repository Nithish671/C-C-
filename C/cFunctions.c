#include <stdio.h>

void myFunction() {
    printf("I just got executed...\n");
}

void myFunction1(char name[]) {
    printf("Hello %s\n", name);
}

void func(char fName[], char lName[], int age) {
    printf("I am %s %s and my age is %d.\n", fName, lName, age);
}

void myFunc(int myNumbers[5]){
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}

int myFunc1(int x) {
    return x + 25;
}

int myFunc2(int x, int y) {
    return x + y;
}

int main() {
    myFunction();
    myFunction();

    func("Itachi", "Uchiha", 20);

    myFunction1("Sasuke");

    int myNum[5] = {1, 2, 3, 4, 5};

    myFunc(myNum);

    printf("Result is : %d\n", myFunc1(6));

    printf("Result is : %d\n", myFunc2(25,6));

    int result = myFunc2(25, 6);
    printf("Result is : %d\n", result);
    return 0;
}