#include <stdio.h>

void main ()
{
    int numero, i=2, sequencia[100];

    printf("Coloque um numero:\n");
    scanf("%i", &numero);

    sequencia[0] = 0;
    sequencia[1] = 1;


     while(sequencia[i-1]<numero)
    {

        sequencia[i]= sequencia[i-1]+ sequencia[i-2];
        i++;
    }

    if(numero == sequencia[i-1])
    {

        printf("O numero colocado eh fibonacci");
    }
    else
    {
        printf("O numero colocado nao eh fibonacci");
    }

}
