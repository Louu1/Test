#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 0, argent = 0;

    printf("Quel age as-tu?");
    scanf("%d", &age);
    printf("Combien de moula as-tu?");
    scanf("%d", &argent);


//Ici supérieur ou égale à 18 ans: s'écrit aussi if(!(age < 18 && age > 25))
    if (age >= 18 && age < 25) 
    {
//affiche vous êtes majeur si sup ou égal à 18 ans et en dessous de 25:
       printf("Vous êtes majeur et en pleine forme!\n");    
    }
// Pour afficher ce message si il est quand même un peu agé:
    else if (age > 15 || argent < 500)
    {
        printf("Bon... OK! Tu seras sûrement majeur lorsque la Covid sera vaicu ou alors mdr la Covid t'a vidé les poches.");
    }
// Comme est en dessous de 18 et 16 ans, ce message s'affiche:
    else
    {
        printf("Ah! bon...bah t'es mineur sac à merde!");
    }

       return 0;
}

