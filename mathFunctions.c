#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    int x = 9;
    int z = 3.1415;


    //getting the square root of x
    x = sqrt(x);
    printf("the sqrt of x is %d\n", x);

    //getting the power of x
    x = pow(9,2);
    printf("x to the poer 2 %d\n" ,x);

    //Ceil and floor or z
    int f = floor(z);
    int c = ceil(z);
    printf("the ceil of z is %d and the floor is %d\n ",c ,f);

    // same with abs() , sine() , cos() , log()



    return 0;
}