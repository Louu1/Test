#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (1)
    {
        printf("C'est vrai !\n");

    }
    else
    {
        printf("C'est faux\n");
    }
   {
    int age = 20;
    int majeur = 0;

    majeur = age >= 18;

    printf("Majeur vaut: %d\n",majeur);
   }
    return 0;
}