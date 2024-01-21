#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isProgrammingFun = true;
    bool isAnimeForKids = false;

    printf("%d\n", isProgrammingFun); 
    printf("%d\n", isAnimeForKids);

    int x = 25;
    int y = 10;

    printf("\n");
    printf("%d\n", x > y);
    printf("%d\n", 10 == 25);

    bool programmingIsSoGood = true;
    bool animeIsSoGood = true;

    printf("\n");
    printf("%d\n", programmingIsSoGood == animeIsSoGood);
    printf("\n");

    int myAge = 22;
    int votingAge = 18;

    if(myAge >= votingAge) {
        printf("Old enough to vote\n");
    } else {
        int ageDiff = votingAge - myAge;
        if(ageDiff > 1){
            printf("You have wait %d more years to vote.\n", ageDiff);
        } else {
            printf("You have wait %d more year to vote.\n", ageDiff);
        }
    }

    return 0;
}