#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a , b , r1 , r2 , r3 , r4 , r5 ;

    printf("Taper variable a : \n");
    scanf("%d",&a);

    printf("Taper variable b : \n");
    scanf("%d",&b);

    r1 = a + b ;
    r2 = a - b ;
    r3 = a * b ;
    r4 = a / b ;
    r5 = a % b ;

    printf("Resultat de a+b=%d & a-b=%d & a*b=%d & a/b=%d & a%b=%d \n",r1,r2,r3,r4,r5);

    return 0;
}