#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

//while loops => excutes the body of code when the condition is true

int main(){

    char name[50] = "";

    printf("ENTER YOUR NAME: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    while (strlen(name) ==0)
    {
        printf("YOU DID NOT ENTER THE NAME\n");
        printf("ENTER YOUR NAME: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) -1] = '\0';
    }
    printf("HELLO %s", name);

    return 0;
}