#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a , b , c , d , Somme ;
    float Moyenne ;

    printf("Taper variable a : \n");
    scanf("%d",&a);

    printf("Taper variable b : \n");
    scanf("%d",&b);

    printf("Taper variable c : \n");
    scanf("%d",&c);

    printf("Taper variable d : \n");
    scanf("%d",&d);

    Somme = a + b + c + d ;
    Moyenne = Somme / 4 ;

    printf("La Somme Est %d & La Moyenne Est %f \n",Somme , Moyenne);

    return 0;
}