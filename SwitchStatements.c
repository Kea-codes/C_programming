#include <stdio.h>
#include <string.h>
#include <math.h>

//switch() => AN ALTERNATIVE TO USING MANYIF-ELSE STATEMENT
//         => MORE EFFICIENT WITH INTEGERS AND CHARACTERS

int main(){

    int DayOfTheWeek = 0;
    printf("ENTER THE DAY OF THE WEEK (1-7): ");
    scanf("%d", &DayOfTheWeek);

    switch (DayOfTheWeek)
    {
        case 1:
         printf("IT IS MONDAY");
        break;
        case 2:
         printf("IT IS TUESDAY");
        break;
        case 3:
         printf("IT IS WEDNESDAY");
        break;
        case 4:
         printf("IT IS THURSDAY");
        break;
        case 5:
         printf("IT IS FRIDAY");
        break;
        case 6:
         printf("IT IS SATURDAY");
        break;
        case 7:
         printf("IT IS SUNDAY");
        break;
    default:
        printf("ENTER A NUMBER FROM 1 - 7");
        break;
    }


    char WeekDay = '\0';
    printf("ENTER THE WEEK DAY OF YOUR CHOICE (M, T, W, H, F,S ,U): ");
    scanf(" %c", &WeekDay);

    switch (WeekDay)
    {
        case 'M':
            printf("TODAY IS MONDAY");
             break;
        case 'T':
            printf("TODAY IS TUESDAY");
             break;
        case 'W':
            printf("TODAY IS WEDNESDAY");
             break;
        case 'H':
            printf("TODAY IS THURSDAY");
             break;
        case 'F':
            printf("TODAY IS FRIDAY");
             break;
        case 'S':
            printf("TODAY IS SATURDAY");
             break;
        case 'U':
            printf("TODAY IS SUNDAY");
             break;
    
    default:
        break;
    }
   
    return 0;
}