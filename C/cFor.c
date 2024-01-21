#include <stdio.h>

int main() {

    for(int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    for(int a = 0; a < 5; a++) {
        printf("Outer Loop : %d\n", a);
        for(int b = 0; b < 5; b++) {
            printf("inner Loop : %d\n", b);
        }
        printf("\n");
    }
}