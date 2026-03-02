#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){

    // NUMBER GUSING GAME

    // SET THE SEED FIRST FFOR RANDOM OUTPUTS
    srand(time(NULL));

    int guess = 0;
    int tries =0;

    int min = 1;
    int max = 100;

    int answer = (rand() % (max - min +1)) + min;

    printf("-------NUMBER GUESSING GAME -----\n");

    do{

        printf("GEUSS A NUMBER BETWEEN %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess > answer){
            printf("TOO HIGH\n");
        }else if(guess < answer){
            printf("TOO LOW\n");
        }else{
            printf("CORRECT! \n");
        }

    }while (guess != answer);

    printf("THE ANSWER IS %d\n", answer);
    printf("IT TOOK YOU %d tries", tries);
    

    return 0;
}