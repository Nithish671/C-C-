#include <stdio.h>

int main() {
    int myAge = 22;

    printf("%p\n", &myAge);

    int age = 20;
    int* ptr = &age;

    printf("%d\n", age);
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}