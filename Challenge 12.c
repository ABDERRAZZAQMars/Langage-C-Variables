#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , n ;

    printf("Entrer Nombre entier à trois chiffres : \t");
    scanf("%d",&n);

    a = n / 100 ;
    n = n % 100 ;
    b = n / 10 ;
    c = n % 10 ;

    printf("\nle nombre entier son inverse est %d%d%d",c,b,a);


    return 0;
}