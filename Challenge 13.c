#include <stdlib.h>
#include <stdio.h>

int main()
{
    int Nb ;

    printf("Entrez un nombre entier : \n");
    scanf("%d",&Nb);

    printf("La Valeur %d En Octal Est %o \n",Nb,Nb);
    printf("La Valeur %d En Hexadecimal Est %x \n",Nb,Nb);

    return 0;
}