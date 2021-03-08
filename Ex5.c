#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    char tipo[30];
    int qtd_int;
    int posicao;
} Banda;

void cadBanda(Banda* band)
{
    int qtd,pos;
    printf("Digite o nome da banda \n");
    fgets(band.nome, 30, stdin);
    printf("Digite o tipo da banda \n");
    fgets(band.tipo, 30, stdin);
    printf("Digite a quantidade de integrantes da banda \n");
    band->qtd_int = scanf("%i", &qtd);
    printf("Digite a posição da banda \n");
    band->posicao = scanf("%i", &pos);
    //printf("A banda %c de %c tem %i integrantes, ocupa a posição %i", band.nome, band.tipo, qtd, pos);
}

int main()
{

    return 0;
}
