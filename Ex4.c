#include <stdio.h>
#include <stdlib.h>

int *vetor(int tamanho)
{
    int*vet;
    vet = (int*) malloc(tamanho* sizeof(int));
    int i;
    for(i=0;i<tamanho;i++)
        {
            printf("Digite o valor de %i\n", i+1);
            scanf("%i",&vet[i]);
            printf("Valor %i no vetor = %i\n\n", i, vet[i]);
        }
    if(vet<=0)
    return NULL;
    else
    return vet;
}

int main()
{
    int tam,*vet;
    printf("Informe do tamanho do vetor\n");
    scanf("%i",&tam);
    vet = vetor(tam);


    free(vet);
    return 0;
}

