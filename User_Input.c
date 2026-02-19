#include <stdio.h>

//User input
//scanf() => Is the function used to get the user input
        //=> IT CANNOT READ WHITE SPACES 
//fgets() => IS AN ALTERNATIVE TO scanf, IT READS WHITE SPACES
int main(){

    char name[30] = "";//STRING THAT TAKES IN 30 ELEMENTS
    char surname[50]= "";  
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';// NULL TERMINATOR CHARACTER

    //PRINTING OUT THE STRING 
    printf("ENTER YOUR NAME: ");
    scanf("%s", &name);

    //PRINTING A FLOAT
    printf("ENTER YOUR GPA: ");
    scanf("%f", &gpa);

     //PRINTING A CHARACTER
    printf("ENTER YOUR GRADE: ");
    scanf(" %c", &grade);

    //PRINTING AN INTEGER
    printf("ENTER YOUR AGE: ");
    scanf("%d", &age);

    //PRINTING AND SCANNING YOUR SURNAME
    getchar();//clears a new line buffer
    printf("ENTER YOUR NAME AND SURNAME: ");
    //scanf("%s", &surname);
    fgets(surname ,sizeof(surname) ,stdin );


    printf("***************************\n");
    //PRINTING
    printf("%s\n", name);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%d\n", age);
    printf("%s\n", surname);
    
    return 0;
}