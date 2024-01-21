#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

enum Level1 {
    LOW1 = 24,
    MEDIUM1,
    HIGH1
};

enum Level2 {
    LOW2 = 25,
    MEDIUM2 = 10,
    HIGH2 = 6
};

enum Level3 {
    LOW3 = 1,
    MEDIUM3,
    HIGH3
};

int main() {
    enum Level myVar = MEDIUM;

    enum Level1 myVar1 = MEDIUM1;

    enum Level2 myVar2 = MEDIUM2;

    printf("%d\n", myVar);
    printf("%d\n", myVar1);
    printf("%d\n", myVar2);

    enum Level3 myVar3 = MEDIUM3;

    switch(myVar3) {
        case 1:
        printf("Low Level\n");
        break;

        case 2:
        printf("Medium Level\n");
        break;

        case 3:
        printf("High Level");
        break;
    }
    return 0;
}