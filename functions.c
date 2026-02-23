#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void HappyBdaysong(char person[], int yearsold){
 
    printf("HAPPY BDAY %s\nyou are %d" , person, yearsold);
}

int main(){
    
    char name[] = "KEA";
    int age = 25;
    HappyBdaysong(name, age);

    char BdayBoy_name[50] = "";
    int BdayBoy_age = 0;

    printf("\nENTER YOUR NAME BB DAY BOY: ");
    fgets(BdayBoy_name, sizeof(BdayBoy_name), stdin);
    BdayBoy_name[strlen(BdayBoy_name) -1] ='\0';

    printf("ENTER YOUR AGE BB DAY BOY: ");
    scanf(" %d", &BdayBoy_age);

    HappyBdaysong(BdayBoy_name, BdayBoy_age); //CALLING THE FUNCTION


    return 0;
}