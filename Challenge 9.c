#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x1 , y1 , x2 , y2 , M , N , MN ;

    printf("Entrer x1 :\t \n");
    scanf("%f",&x1);

    printf("Entrer y1 :\t \n");
    scanf("%f",&y1);

    printf("Entrer x2 :\t \n");
    scanf("%f",&x2);

    printf("Entrer y2 :\t \n");
    scanf("%f",&y2);

    M = (x2 - x1)*(x2 - x1);
    N = (y2 - y1)*(y2 - y1);

    MN = sqrt (M+N);

    printf ("la distance entre M et N Est %.1f",MN);
    
    return 0;
}