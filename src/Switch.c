#include <stdio.h>
#include <stdlib.h>

    
int main(int argc, char *argv[])
{   
    int age = 0;

    printf("Quel age as-tu?");
    scanf("%d", &age);

    switch (age)
    {
    case 2:
        printf("Yo t'es un bébé toi non!\n");
        break;

    case 6:
        printf("Yo toi t'es un petit con non !\n");
        break;

    case 12:
        printf("Yo toi t'es un peu con non !\n");
        break;

    case 16:
        printf("Yo le prépubère!\n");
        break;

    case 18:
        printf("Yo le vieux !\n");
        break;

    case 68:
        printf("Yo l'ancêtre !\n");
        break;

    default:
        printf("Franchement toi t'es un bon! \n  ");
        break;

    }



    return 0;
}