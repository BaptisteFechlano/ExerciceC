#include <stdio.h>

int main(void)
{
    int min = 0, max = 0, sum = 0;

    printf("Entrez un nombre MIN (entre 1 et 1000) :");
    scanf("%d", &min);

    if(min < 1)
    {
        printf("Min trop petit ! \n");
        return -1;
    }

    printf("Entrez un nombre MAX (entre 1 et 1000) :");
    scanf("%d", &max);

    if(max > 1000)
    {
        printf("Vous avez entree un nombre Max au dessus de la limite!\n");
        return-1;
    }

    if(min > max)
    {
        printf("Saisie incorrectes! \n");
        return-1;
    }

    if(min != max)
        for(int i = min ; i < max + 1 ; i++)
            sum += i;
    else
        sum = min; 
    

    printf("Somme finale : %d\n", sum);

    return 0;
}