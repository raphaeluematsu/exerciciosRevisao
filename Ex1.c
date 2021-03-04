#include <stdio.h>
#include <stdlib.h>

void converte(int totalMinutos, int *horas, int *minutos)
    {
        *horas = totalMinutos/60;
        *minutos = (totalMinutos %60);
    }

int main()
{

    int totalMinutos, horas, minutos;
    printf("Digite os minutos\n");
    scanf("%i", &totalMinutos);
    converte(totalMinutos, &horas, &minutos);
    printf("%i horas e %i minutos\n", horas, minutos);

    return 0;
}
