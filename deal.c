#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

/* fichier permettant la mise en place des enchères. Le joueur à droite du donneur commence à enchérir 
Edité par Rémi LOCATELLI 26/05/2020 */

printf("Bid phase"\n\n);
printf("Your cards :");
for (int i = 0; i<8; i++) {
  printf("%d    ", HandPlayer[i]) // permet au joueur de consulter son jeu avant d'enchérir
}
printf("\n\n")
  
int pass = 0;
int bid = 0;
int trump = NULL;

switch (CardDistributor);
  
  Case North;
      
      do {
      WestDecision(bid);
      PlayerDecision;
      EastDecision;
      NorthDecision;
      if ((WestSizeH => 4) || (WestSizeD => 4) || (WestSizeS => 4) || (WestSizeC => 4) && bid<120) { // ex : WestSizeH nombre de Coeurs forts pour West (idem pour autres variables...)
        bid = 120;
        if (WestSizeH => 4) {
            printf("West goes for 120 Heart");
        
        printf("What do you want to do ?\n\n");
        PlayerDecision(decision, pass);
        printf("East player pass\n");
        printf("North player pass\n");
        printf("Game will start\n");
        // appeler fichier atout correspondant
               } else {
          if ((WestSizeH => 3) || (WestSizeD => 3) || (WestSizeS => 3) ||(WestSizeC => 3){
            printf("West go for 80");
            PlayerDecision(decision, pass);
            
                } else {
            printf("West Player pass\n");
            bid = 0;
            pass = pass + 1
            PlayerDecision(decision, pass);
        while ((pass != 3) && (bid = 0));
  break;  

  Case East;
  break;

  Case South;
  break;

  Case West;

  break;
           
            
void WestDecision(int trump, int bid, int pass) {
  if (((WestSizeH => 4) || (WestSizeD => 4) || (WestSizeS => 4) || (WestSizeC => 4)) && (bid<120)) { // ex : WestSizeH nombre de Coeurs forts pour West (idem pour autres variables...)
        bid = 120;
        if (WestSizeH => 4) {
            printf("West goes for 120 Heart\n\n");
            trump = "Heart";
        }
        if (WestSizeD => 4) {
           printf("West goes for 120 Diamond\n\n");
           trump = "Diamond"
        }
        if (WestSizeS => 4) {
           printf("West goes for 120 Spade\n\n"); 
           trump = "Spade";
        }
        if (WestSizeC => 4) {
           printf("West goes for 120 Club\n\n"); 
           trump = "Spade";
        }
            PlayerDecision(trump, bid, pass);
            printf("East player pass\n");
            printf("North player pass\n");
            printf("Game will start\n");
    
    } else {
    
         if (((WestSizeH => 3) || (WestSizeD => 3) || (WestSizeS => 3) || (WestSizeC => 3)) && (bid<80)) { // ex : WestSizeH nombre de Coeurs forts pour West (idem pour autres variables...)
                bid = 80;
                if (WestSizeH => 3) {
                    printf("West goes for 80 Heart\n\n");
                    trump = "Heart";
                }
                if (WestSizeD => 4) {
                   printf("West goes for 80 Diamond\n\n");
                   trump = "Diamond"
                }
                if (WestSizeS => 4) {
                   printf("West goes for 80 Spade\n\n"); 
                   trump = "Spade";
                }
                if (WestSizeC => 4) {
                   printf("West goes for 80 Club\n\n"); 
                   trump = "Spade";
                }
                PlayerDecision(trump, bid, pass);
                EastDecision(trump, bid, pass);
                NorthDecision(trump, bid, pass);
           
         } else {
           
           pass = 0;
           printf("West passed\n\n");
           PlayerDecision(trump, bid, pass);
           EastDecision(trump, bid, pass);
           NorthDecision(trump, bid, pass);
         }
  }
        
    
  
void EastDecision
  
  
void NorthDecision

void PlayerDecision (decision, pass) {
    printf("What do you want to do ?\n\n");
        printf("\t 1 - Pass \n\t 2 - Bid \n\t 3 - Capot \n\t 4 - General \n\t 5 - Coinche \n\n");
        scanf("%d", &decision);
        switch (decision);
          case 1 : pass = pass + 1;
            break;
          case 2 : do printf("You have to give a strictly superior value than the previous bid\n") {
                   int playerBid = 0
                   scanf("%d", &playerBid);
                    } while (playerBid =< bid);
                   bid = playerBid;
                   printf("What trump do you want to choose ?")
             break;
          case 3 :
            break;
          case 4 : 
             break;
          case 5 ; 
            break;
  }
