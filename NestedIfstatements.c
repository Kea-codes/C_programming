#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = false;
    bool isSinior = false;

    if(isStudent){//IS A STUDENT
        if(isSinior){// IS A STUDENT AND SINIOR
             printf("YOU GET THE STUDENT DISCOUNT OF 10%\n");
             printf("YOU GET A SINIOR DISCOUNT OF 20% \n");
             price = price * 0.7;    
        }else{
            printf("YOU GET THE STUDENT DISCOUNT OF 10%\n");
        }

       
    }else{//NOT A STUDENT
        if(isSinior){//NOT STUDENT BUT SINIOR
            printf("YOU GET A SINIOR DISCOUNT OF 20% \n");
        }
    }

    //IF YOU ARE NOT A STUDENT AND NOT A SINIOR
    printf("THE PRICE OF THE TICKET IS $%0.2f", price);

    return 0;
}