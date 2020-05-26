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

switch (CardDistributor);
  
  Case North;
      if ((WestSizeH => 4) || (WestSizeD => 4) || (WestSizeS => 4) || (WestSizeC => 4)) { // ex : WestSizeH nombre de Coeurs forts pour West (idem pour autres variables...)
        bid = 120;
        printf("West goes for 120");
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

  break;  

  Case East;
  break;

  Case South;
  break;

  Case West;

  break;
         
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
             break;
          case 3 :
            break;
          case 4 : 
             break;
          case 5 ; 
            break;
  }
