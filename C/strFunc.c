#include <stdio.h>
#include <string.h>

int main() {
    char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(abc));
    printf("%d\n", sizeof(abc));

    char abc1[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%lu\n", strlen(abc1));
    printf("%lu\n", sizeof(abc1));

    char abc2[52];
    strcpy(abc2, abc);

    strcat(abc, abc1);
    printf("%s\n", abc);

    printf("%s\n", abc);

    printf("%d\n", strcmp(abc1, abc2));
    printf("%d\n", strcmp(abc, abc2));

    return 0;
}