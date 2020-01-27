#include <stdio.h>
#include <stdlib.h>

int flMaiorNum (int num1, int num2) {

    if(num1 < num2)
        return num2;
    else
        return num1;
}

int main() {

    int n1,n2,n3,n4,maior;

    printf("insira 4 numeros \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    printf("Maior numero: %d", flMaiorNum(flMaiorNum(flMaiorNum(n1,n2),n3),n4));
return 0;}
