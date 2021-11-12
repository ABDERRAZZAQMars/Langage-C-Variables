#include <stdlib.h>
#include <stdio.h>

int main()
{
    float C , longueur , largeur ;

    printf("Entrer la longueur : \t\n"),
    scanf("%f",&longueur);

    printf("Entrer la largeur : \t\n"),
    scanf("%f",&largeur);

    C = 2*(longueur + largeur);

    printf("la circonference d'un rectangle = %.2f",C);

    return 0;
}