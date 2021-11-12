#include <stdio.h>
#include <stdlib.h>

int main()
{
      float c , F;

    printf("Entrer la Temperature C : \n");
    scanf("%f",&c);

    F = (c*1.8)+32 ;

    printf("La formule : F = (C*1.8)+32 Est %f ",F);

    return 0;
}