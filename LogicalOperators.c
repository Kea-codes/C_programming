#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

// LOGICAL OPERATORS => USED IN CONDITIOONS
// && => AND
// || => OR
// ! => NOT

int main(){

    int temperature = 0;
    printf("ENTER A TEMPERATURE(IN DEGREE CELCIUS): ");
    scanf("%d", &temperature);

    if(temperature <0  ){
        printf("IT IS VERY COLD\n");
    }else if(temperature >= 0 && temperature <= 15){
        printf("IT IS COLD\n");
    }else if(temperature > 15 && temperature <=23){
        printf("IS IS CHILLI\n");
    }else if (temperature >23 && temperature < 50){
        printf("IS IS HOT\n");
    }else{
        printf("IT IS EXTREMELY HOT\n");
    }

    bool isStudent =false;
    bool isSinior = true;

    if (isStudent && !isSinior)
    {
        printf("YOU ARE A STUDENT NOT SINIOR");
    }else if(!isStudent && isSinior){
        printf("YOU ARE A SINIOR BUT NOT STUDENT");
    }else if(!isStudent || !isSinior){
        printf("YOUR ARE NOT A STUDENT AND SINIOR");
    }else{
        printf("YOU ARE NOTHING!!");
    }

    return 0;
}