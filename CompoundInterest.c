#include <stdio.h>
#include <math.h>
#include <string.h>

//CALCULATE A COMPOUND INTEREST
// A => FUTURE VALUE
// P => INITTIAL VALUE
// r => INTEREST RATE
// n => 100
// t => TIME PERIOD OF INVESTMENT

// A = P ( 1 + r / n )^t

int main(){

    //double A = 0.0;
    double P = 0.0;
    double r = 0.0;
    const int n = 100;
    int t = 0;
    char currency = '$';
    
    printf("ENTER THE INITILA VALUE (P):%c ", currency);
    scanf("%lf", &P);

    printf("ENTER THE INTEREST RATE: ");
    scanf("%lf" , &r);

    printf("ENTER THE TIME PERIOD OF THE INVESTMENT (YEARS): ");
    scanf("%d",&t);
    
    double A = P*pow(1 + r/n,t);
    printf("YOUR FUTURE INVESTMENT IS :%c %0.2lf", currency,A);

    return 0;
}