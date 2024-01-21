#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("demo.txt", "r");

    char myString[100];
    //fgets(myString, 100, fptr);
    
    if(fptr != NULL) {
    while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }
    } else {
        printf("Not able to open  the file\n");
    }

    //printf("%s", myString);
    //fprintf(fptr, "Wake up to reality...");
    //fprintf(fptr, "\nNothing ever goes as planned,\n in this accursed world...");

    fclose(fptr);

    return 0;
}