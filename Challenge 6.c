#include <stdlib.h>
#include <stdio.h>

int main()
{
    float F , C ;

    printf("Entrer La Température en Fahrenheit : \n");
    scanf("%f",&F);

    C = (F-32) / 1.8 ;

    printf("La Formule : C = (F-32) / 1.8 Est : %f C \n",C);

    return 0;
}