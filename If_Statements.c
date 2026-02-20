#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    //IF STATEMENTS
     int age = 0;

     printf("ENTER YOUR AGE: ");
     scanf("%d", &age);

     if(age <= 0){
        printf("YOU HAVENT BEEN BORN");
     }else if(age < 18){
        printf("YOU ARE A TEENAGER");
     }else if(age >= 65){
        printf("YOU ARE A SENIOR");
     }else{
        printf("YOU ARE AN ADULT");
     }

    return 0;
}