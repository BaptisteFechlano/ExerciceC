#include <stdio.h>

/*

    Liste NOIRE ! : gets(), atoi(), atol(,) atod()
    Liste GRISE   : scanf(), fscanf() -> savoir comment cette fonction fonctionne
    Liste BLANCHE : fgets(),

    automatiquement : stdin -> capture tout ce qui passe

    int scanf(const char *format, ..autre variables..);

    int someFonction(params...)
    {
        return 0
        //si problème digitalRead
        return -1;

        //...si problème G
        return -11;
    }

    ret = someFunction(...)

    -------------------------------------------

    chaine en C : blablahbla\0 (scanf avec %s)
    
     

*/
/*

porte|creerdictionnaire
chat|dsjdklae
voiture|fzklfjezfmlkj travailler avec des fichiers binaire
pareil à "%s|%s"....

manipules des octets 

sizeof() 

%s, %c, %d,

%5[]


*/

#define BUFFER_SIZE 6
//juste un exemple n'est pas du tout sécurisé

int main(void)
{
    char buffer[BUFFER_SIZE + 1];
    int ret;

    printf("Que des a ou b ou c : ");
    ret = scanf("%[A-Za-z0-9]", buffer);

    printf("Mot saisie : %s\n", buffer);
    printf("RET : %d\n", ret);

    return 0;
}