#include <stdio.h>
#include <stdlib.h>
int somanumero(int soma)
{
    int result=0;
    while (result<=100)
          result+= soma;
    return result;
}
int main()
{
    int num;
    printf("informe um numero \n");
    scanf("%d",&num);
    printf("O resultado eh: %d , foi feita %d operacoes",somanumero(num),somanumero(num)/num);
    return 0;
}
