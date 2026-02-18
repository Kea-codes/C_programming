#include <stdio.h>

int main(){

    int x = 2;
    int y = 6;
    int z = 0;
   

    
    //ADDITION
     int a = x + y;
    //MULTIPLICATION
    int m = z * x;
    //SUBTRACTION
    int s = y - z;
    //DIVISION
    int d = y / x;
    //MODULAS
    int mod = 5 % 2;

    //Printing
    printf("ADDITION %d\n", a);
    printf("MULTIPLICATION %d\n", m);
    printf("SUBTRACTION %d\n", s);
    printf("DIVISION %d\n",d);
    printf("MODULAS %d\n",mod);

    //DECREMENT
    x--;
    printf("DECREMENT %d\n",x);
    //INCREMENT
    y++;
    printf("INCREMENT %d\n",y);

    //AUGMENTED ASSIGNMENTS
    int r = 2; //
    r+=2; //r*=2 , r-=2 , r/=2
    printf("AUGMENTED %d", r);



    return 0;
}