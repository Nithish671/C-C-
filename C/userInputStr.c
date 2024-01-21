#include <stdio.h>

int main()  {
    /* char firstName[20];

    printf("Enter your first name and press enter : \n");

    scanf("%s", firstName);

    printf("Hello %s!\n", firstName); */

    char fullName[20];
    
    printf("Enter your Fullname and enter : \n");

    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s!\n", fullName);

    return 0;
}