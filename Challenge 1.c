#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20] , prenom[20] , sexe[20];
    int age , phone;

    printf("Entrer Votre Nom : \n");
    scanf("%s",&name);

    printf("Entrer Votre Prenom : \n");
    scanf("%s",&prenom);

    printf("Entrer Votre Age : \n");
    scanf("%d",&age);

    printf("Entrer Le Sexe : \n");
    scanf("%s",&sexe);

    printf("Entrer Le Numero De Telephone : \n");
    scanf("%d",&phone);

    printf("\nFull Name : %s %s , Age : %d Ans , Sexe : %s , Tele : %d\n", name, prenom, age, sexe, phone);



    return 0;
}
