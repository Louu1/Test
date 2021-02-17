#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double Nombre1 =0, Nombre2 = 0, Resultat1 = 0, Resultat2 = 0, Resultat3 = 0, Resultat4 = 0;

// On demande les nombres 1 et 2 à l'utilisateur :

    printf ("Choisissez le nombre 1:");
    scanf("%lf", &Nombre1);
    printf ("Choisissez le nombre 2:");
    scanf("%lf", &Nombre2);
// On fait les calculs :

     Resultat1 = Nombre1 / Nombre2;
     Resultat2 = Nombre1 + Nombre2;
     Resultat3 = Nombre1 - Nombre2;
     Resultat4 = Nombre1 * Nombre2;
// Et on affiche les calculs et résultats à l'écran :
    printf("%lf / %lf = %lf\n", Nombre1, Nombre2, Resultat1);
    printf("%lf + %lf = %lf\n", Nombre1, Nombre2, Resultat2);
    printf("%lf - %lf = %lf\n", Nombre1, Nombre2, Resultat3);
    printf("%lf * %lf = %lf\n", Nombre1, Nombre2, Resultat4);
    return 0;
}