#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opa(int x,int y)
{
    if(y == 0)
    return 1;
    else
    return x*pow(x,y-1);
}
int main()
{
    int x,y;
    printf("Digite o valor de x\n");
    scanf("%i",&x);
    printf("Digite o valor de y\n");
    scanf("%i",&y);
    printf("O resultado é %i \n", opa(x,y));
    return 0;
}
