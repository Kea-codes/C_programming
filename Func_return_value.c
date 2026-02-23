#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

double cube(double num){ //THIS FUNCTIONS CUBES A NUMBER
    return pow(num,3);
}

int square(int num){ // THIS FUNCTION CUBES A NUMBER
    return pow(num, 2);
}

double getmax_num(double x , double y ){

    if(x > y){
        return x;
    }else if(x< y){
        return y;
    }else{
        return printf("NUMBERS ARE THE SAME\n");
    }

}

int main(){

    int x = cube(2);
    int y = cube(3);
    int z = square(4);

    printf("x^3 =%d\ny^3 =%d\nz^2 =%d" , x ,y,z);

    double max = getmax_num(6,30);
    printf("\nThe max num: %0.2lf" , max);


    return 0;
}