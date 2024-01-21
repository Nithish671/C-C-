#include <stdio.h>

int main() {
    int x = 25;
    int y = 6;

    printf("%d\n", x == y);
    printf("%d\n", x != y);
    printf("%d\n", x > y);
    printf("%d\n", x < y);
    printf("%d\n", x >= y);
    printf("\n");

    printf("%d\n", x >= y && x != y);
    printf("%d\n", x < y || x == y);
    printf("%d\n", !(x < y || x == y));

    printf("\n");

    int myInt;
    printf("%lu\n", sizeof(myInt));

    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(char));
    

    return 0;
}