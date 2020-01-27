#include <stdio.h>
#include <stdlib.h>

char conceito (float nota) {

    if(nota >= 0.0 && nota <= 4.9)
        return 'D';
    else if(nota >= 5.0 && nota <= 6.9)
        return 'C';
    else if(nota >= 7.0 && nota <= 8.9)
        return 'B';
    else if(nota >= 9.0 && nota <= 10.0)
        return 'A';

    return 'X';
}

int main() {

    float n1,n2,n3, media;
    int option;

    do{

        printf("insira 3 notas \n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);

        media = (n1+n2+n3)/3;
        printf("A media e: %.2f e o conceito e: %c \n",media, conceito(media));

        printf("deseja calcular as notas? \n");
        printf("-1 para Nao \n");
        printf("qualquer outro carcter para Sim \n");
        scanf("%d", &option);
    }while(option != -1);
return 0;}
