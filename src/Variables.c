#include <stdio.h>
#include <stdlib.h>
 
void  affiche(char *message) {
    int a = printf("%s\n", message);
}

int main(int argc, char *argv[]) // Équivalent de int main()
{

      int NombreDeVies = 5; // Au départ, le joueur a 5 vies
      affiche( "coucou");  
      printf("Il vous reste %d vies\n", NombreDeVies);
      printf("**** B A M ****\n"); //La il se prend un gros coup
      NombreDeVies = 4; // Il vient de perdre 1 vie !
      printf("Vous êtes éclaté au sol, il vous reste %d vies maintenant \n\n", NombreDeVies);

    

    return 0;
}