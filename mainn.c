#include<stdio.h>
#include<stdlib.h>
void afficherMenu(){
    printf("\n[[[[[[[  TIC TAC TOE:]]]]]]\n");
    printf("1.***COMMENCER UNE NOUVELLE PARTIE***\n");
    printf("2.***JOUER CONTRE IA*****************\n");
    printf("3.***TERMINER LA PARTIE**************\n");
    printf("4.***QUITTER LE JEU******************\n");
}
int main(){
    int choix;
    do{
       afficherMenu();
    printf("choississez une option (1-4): ");
    scanf("%d",&choix);
    switch (choix){
    case 1:
        printf("nouvelle partie commencer.\n");
               break;
               case 2:
               printf("GOOD LUCK.\n");
               break;
               case 3:
                printf("partie terminer.\n");
                break;
               case 4:
                printf("quitter le jeu\n");
                break;
               default:
                printf("choix invalide. veuillez choisir emtre 1 et 4.\n");
    }
    } while (choix != 4);
    return 0;
}
