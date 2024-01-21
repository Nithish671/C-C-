#include <stdio.h>

int main() {
    int x = 25;
    x += 6;

    printf("%d\n", x);
    printf ("%d\n", x -= 6);
    printf("%d\n", x *= 6);
    printf("%d\n", x /= 6);
    printf("%d\n", x %= 6);
    printf("\n");

    int a = 10;
    
    printf("%d\n", a |= 11);
    printf("%d\n", a &= 10);

    printf("%d\n", a <<= 6);
    printf("%d\n", a >>= 6);

    return 0;
}