#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


void Header(){
    printf("*************************\n");
    printf("\n");
    printf("*                       *\n");
    printf("\n");
    printf("*    Belote coinchee    *\n");
    printf("\n");
    printf("*                       *\n");
    printf("\n");
    printf("*************************\n");
}
void PrincipalMenu(){
    int choice=0;

    printf("What do you want to do?\n\n");

    printf("1 : Start a new game\n");
    printf("2 : Show the high scores\n");
    printf("3 : Quit the game\n");

    do{scanf("%d",&choice);
        switch (choice){

        case 1:
            LoadGame();
        break;
        case 2:
            HighScore();
        break;
        case 3:
            return 0;
        break;
        default:
            printf("Please enter a correct number?\n");
    }}while ((choice!=1) && (choice!=2)&& (choice!=3));
}

void CardsDistribution(){
}

void HighScore(){
    Header();
    printf("The High Score Board\n");
}

void LoadGame(){
    string pseudo;
    Header();
    printf("Please enter your name\n");
    scanf("%s",&pseudo);
    printf("pseudo %s",pseudo);

}
