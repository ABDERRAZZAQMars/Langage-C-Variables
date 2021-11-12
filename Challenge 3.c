#include <stdlib.h>
#include <stdio.h>

int main()
{
    float Mile , Km , Metre ;

    printf("Entrer la distance en Metre \n");
    scanf("%f",& Metre);

    Km = Metre * 1000 ;

    Mile = Km * 1.609 ;

    printf("La formule : Mile = Km*1.609 Est %f Mile",Mile);
}