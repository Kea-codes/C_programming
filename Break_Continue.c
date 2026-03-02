#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// break => Break out of the loop (STOP)
// continue => Skip current cycle of a loop (SKIP)

int main(){

    for(int i=1; i <= 10; i+=1 ){

        if(i == 4){
            continue;
        }

        printf("%d ", i);
        
    }

    return 0;
}