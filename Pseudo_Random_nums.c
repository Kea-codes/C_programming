#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

// rand() => built in function used to generate random numbers

int main(){

    //TO GET RANDOM NUMBS OR OUTPUTS, SEED FIRST
    //CREATING A SEED VALUE TO GET THE CURRENT TIME
    srand(time(NULL));
   // printf("%d\n", rand());

    //INITIALIZE A RANDOM NUMBER THAT YOU WANT TO GET THE MODULUS FROM
    int randnum = rand() % 2;
    printf("%d", randnum);
    
    return 0;
}