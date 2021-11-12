#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14

int main()
{
    float r , C;

    printf("Entrer le rayon r = \t\n");
    scanf("%f",&r);

    C = 2*Pi*r;

    printf("la circonference du cercle = %.2f ",C);

    return 0;
}