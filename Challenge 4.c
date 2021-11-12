#include <stdlib.h>
#include <stdio.h>

int main()
{
    float Mile , Km , Metre ;

    printf("Entrer la distance en Mile \n");
    scanf("%f",& Mile);

    Km = Mile * 1.609 ;

    Metre = Km * 1000 ;

    printf("La formule : Km = Mile/1.609 Est %f Km\n\n",Km);
    printf("La distance Metre Est %f m",Metre);

    return 0;
}