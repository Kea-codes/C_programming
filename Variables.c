#include <stdio.h> //tells the program to include the Input/output libraries 
#include <stdbool.h> //Header file for bool library

int main(){ //to run the C programm we need the main() function
    //VARIABLES = IT IS A PLACE HOLDER FOR A VALUE 

    //INTEGERS

    int age = 25;
    int year = 2002;
    int quantity = 5;

    printf("You are %d years old\n" , age);
    printf("Your were born in %d\n", year);
    printf("You have orderd %d oranges\n", quantity);

    //FLOAT

     float percentage = 25;
     float temp = 45;

    printf("Your percentage is %f\n" , percentage);
    printf("the temperature is %f\n", temp);

    //DOUBLES

    double pi = 3.14159;

    printf("The value of pi is %f", pi);

    //CHARACTERS

    char grade = 'A';

    printf("In your studies you got an %c grade\n", grade);

    //THERE ARE NO STRINGS IN C 
    //BUT CHAR ARRAYS CAN BE USED AS STRINGS

    char name[] = "KEAMOGETSE";
    char email[] = "Keamogetse@123.gamil.com" ;

    printf("Your name is %s\n", name);
    printf("Heyy Kea , your email is %s\n", email);

    //BOOLEAN
     bool isOnline = true; //Needs a header file to usee it
    //it prints out 1 if true , the 0 if false
     
    printf("You are online(1=true, 0=false) %d", isOnline);

    return 0; //returns 0 integer, indicates that the programm ran succesfully

}

