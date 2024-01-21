#include <stdio.h>

int sum(int k);

int main() {
    int result = sum(5);
    printf("%d\n", result);
}

int sum(int k) {
    if(k > 0) {
        printf("%d\n", k);
        return k + sum(k - 1);
    } else {
        return 0;
    }
}