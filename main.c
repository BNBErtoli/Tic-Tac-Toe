#include <stdio.h>
#include <stdlib.h>
#include "identification.h"

int main()
{
    int User_identification;
    //printf("Hello world!\n");
    //On appelle ou execute la fonction identification pour afficher la zone d'identification
   Identification();
    scanf("%d",&User_identification);
    gerer_identification(User_identification);
    return 0;
}
