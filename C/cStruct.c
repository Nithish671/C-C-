#include <stdio.h>
#include <string.h>

struct myStruct {
    int myNum;
    char myLetter;
    char myName[25];

};

struct Car {
    char carBrand[20];
    char carModel[20];
    int year;
};

int main() {
    struct myStruct s1;

    s1.myNum = 25;
    s1.myLetter = 'S';
    strcpy(s1.myName, "Nithish");

    struct myStruct s2 = {10, 'G', "Nithish"};
    struct myStruct s3;
    s3 = s1;

    s3.myNum = 10;
    s3.myLetter = 'G';
    strcpy(s3.myName, "Zoro");    

    printf("My number is : %d\n", s1.myNum);
    printf("My letter is : %c\n", s1.myLetter);
    printf("My Name is : %s\n", s1.myName);

    printf("My number is : %d\n", s2.myNum);
    printf("My letter is : %c\n", s2.myLetter);
    printf("My Name is : %s\n", s2.myName);

    printf("My number is : %d\n", s3.myNum);
    printf("My letter is : %c\n", s3.myLetter);
    printf("My Name is : %s\n", s3.myName);

    struct Car car1 = {"Audi", "A8", 2020};
    struct Car car2 = {"Ford", "Mustang", 2000};

    printf("I have %s %s from %d.\n", car1.carBrand, car1.carModel, car1.year);
    printf("and I have another %s %s from %d.\n", car2.carBrand, car2.carModel, car2.year);
    return 0;
}