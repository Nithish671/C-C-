#include <stdio.h>

int main() {
    char greeting[] = "Hello World";
    printf("%s\n", greeting);
    printf("%c\n", greeting[2]);

    greeting[0] = 'J';
    printf("%s\n", greeting);
    printf("\n");

    char carName[] = "Audi A8";
    int i;

    for(i = 0; i < 7; i++) {
        printf("%c\n", carName[i]);
    }

    char uchiha[] = {'M', 'a', 'd', 'a', 'r', 'a', ' ', 'U', 'c', 'h', 'i', 'h', 'a', '\0'};
    printf("%s\n", uchiha);
    char uchiha1[] = "Madara Uchiha";
    printf("\n");

    printf("%lu\n", sizeof(uchiha));
    printf("%lu\n", sizeof(uchiha1));

    return 0;
}
