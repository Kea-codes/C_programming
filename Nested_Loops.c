#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


// Nested Loops => A loop inside of another one

int main(){

    for(int i=0; i < 4; i++){
        for(int j=0; j<10 ; j++){
            printf("%d ", j); 
        }
        printf("\n");
        
    }

    printf("\n");

    //CREATE A MULTIPLICATION TABLE
     for(int i=0; i < 10; i++){
        for(int j =1;j <= 10; j++ ){
            int multiply = i*j;
            printf("%3d    ",multiply);
        }
        printf("\n");
    }

    //LET THE USER ENTER THE GRID THEY WANT
    int rows = 0;
    int cols = 0;
    char sysmbol = '\0';

    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &rows);

    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d", &cols);

    printf("ENTER THE SYMBOL TO USE: ");
    scanf(" %c", &sysmbol);

    for(int i=0; i < rows; i++){
        for(int j = 0; j< cols; j++){
            printf("%c ", sysmbol);
        }
        printf("\n");
    }



    return 0;
}