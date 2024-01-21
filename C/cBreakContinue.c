#include <stdio.h>

int main() {
    for(int i = 0; i < 10; i++) {
        if(i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    printf("\n");

    for (int j = 0; j < 10; j++) {
        if(j == 4) {
            continue;
        }
        printf("%d\n", j);
    }

    printf("\n");
    
    int a = 0;
    while(a < 10) {
        if(a == 5) {
            break;
        }
        printf("%d\n", a);
        a++;
    } 

    printf("\n");

    int b = 0;
    while (b < 10) {
        if(b == 4) {
            b++;
            continue;
        }
        printf("%d\n", b);
        b++;
    }
}

