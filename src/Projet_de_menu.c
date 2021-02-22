#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int choix = 0;

        printf("=== Menu ===\n");
        printf("1. Royal Cheese\n");
        printf("2. Mc Deluxe\n");
        printf("3. Mc Bacon\n");
        printf("4. Big Mac\n");

        printf("\n Votre choix ?\n");
        scanf("%d", &choix);

    switch (choix)
    {
        case 1:
            printf("Vous avez choisi le Royal Cheese");
            break;
        
        case 2:
            printf("Vous avez choisi le Mc Deluxe");
            break;
        
        case 3:
            printf("Vous avez choisi le Mc Bacon");
            break;

        case 4: 
            printf("Vous avez choisi le Bic Mac");
            break;

        default:
            printf("Choisissez le numéro du menu !");
            break;

    }

    printf("\n\n");
    return 0;

}
