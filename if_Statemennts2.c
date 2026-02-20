#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){;

    char name[40] = "";

    printf("ENTER YOUR NAME: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    if(strlen(name) == 0){
        printf("You did not enter your name");
    }else{
        printf("HELLO!! %s", name);
    }


    return 0;

}