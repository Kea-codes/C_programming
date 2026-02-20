#include <stdio.h>
#include <string.h>

int main(){

    //SETTING THE SIZE OF THE STRINGS TO BE 50
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    

    printf("ENTER AN ADJECTIVE (DESCRIBTION): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)-1] = '\0';

    printf("ENTER A NOUN (AN ANIMAL): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';

    printf("ENTER AN ADJECTIVE (DESCRIBTION): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1] = '\0';

    printf("ENTER A VERB (ENDING WITH ING): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = '\0';

    printf("ENTER AN ADJECTIVE (DESCRIBTION): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)-1] = '\0';

    printf("---------------------------------\n");
    printf("TODAY I WENT TO A %s ZOO\n", adjective1);
    printf("THEN I SAW A %s\n",noun);
    printf("AND THEN I WAS %s\n",  adjective2);
    printf("THE ANIMAL WAS %s\n", verb);
    printf("AND I WAS %s\n", adjective3);


    return 0;
}