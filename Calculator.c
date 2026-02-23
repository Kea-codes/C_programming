#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){

    printf("-----------CALCULATOR----------\n");
    char operator = '\0';
    double num1 = 0;
    double num2 = 0;
    double result = 0;

    //PROMPT THE USER TO ENTER THE DIGITS
    printf("ENTER THE NUM 1: ");
    scanf("%lf", &num1);

    printf("ENTER NUM 2: ");
    scanf(" %ld", &num2);

    printf("ENTER AN OPERATER(+,-,/,*): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
             result = num1 + num2;
             break;
        case '-':
            result = num1 - num2;
             break;
        case '*':
            result = num1 * num2;
             break;
        case '/':
            if(num2 ==0){
                printf("YOU CANNOT DIVIDE BY 0");
            }else{
                result = num1 / num2;
            }
            
             break;
    
    default:
        printf("---INVALID OPERATOR---\n");
        break;
    }

    printf("THE RESULT: %0.2lf ", result);


    return 0;
}