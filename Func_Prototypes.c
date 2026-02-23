#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


//function Prototype =>provides the compiler about the info of the func
// name , return type , parameters


void hello(char name[] , int yearsold); //FUNTION PROTOTYPE

int main(){

    hello("KEA", 45);
    return 0;
}

//FUNCTION
void hello(char name[] , int yearsold){
    printf("HELLO %s ,NICE TO MEET YOU\n", name);
     printf("YOU ARE %d YEARS OLD",yearsold );
}
