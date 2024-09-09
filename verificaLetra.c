#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char palavra[50];
    int i=0, tam, contaLetra=0;

    printf("Coloque a palavra: \n");
    scanf(" %s", palavra);
    tam = strlen(palavra);

    for (i;i<tam; i++)
    {
        if(palavra[i]== 'a'|| palavra[i] == 'A')
            contaLetra++;
    }

    printf("\nA quantidade de A's nessa palavra eh: %d", contaLetra);
    printf("\n");



}

