#include <stdio.h>
#include <string.h>

//CREATING A SHOPPING CART PROGRAM

int main(){

    char item[50] = " ";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    //getchar();
    printf("WHAT ITEM WOULD YOU LIKE TO BUY: ");
    fgets(item, sizeof(item), stdin);
    //THIS ERRASES THE NEW LINE CAUSE BY FGETS()
    item[strlen(item) - 1] = '\0';//SETTING IT TO NULL

    printf("WHAT IS THE PRICE OF THE ITEM: ");
    scanf("%f", &price);

    printf("ENTER THE QUANTITY OF THE ITEM: " );
    scanf("%d", &quantity);

    total = price * quantity;
    printf("YOU BOUGHT %d %s\n", quantity,item );
    printf("YOUR TOTAL IS: %c %.2f",currency, total); //I SET THE PRICISITION TO 2 DECIMAL POINTS

    return 0;
}