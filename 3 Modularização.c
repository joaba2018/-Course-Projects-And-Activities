#include <stdio.h>
#include <stdlib.h>

int sorteio() {
return 1 + rand()%9;}


int main() {
srand(time(NULL));


    int num[10] = {};
    for(int i = 0; i < 100; i++) {
    num[sorteio()]++;

    }

    for(int i = 0; i < 10; i++) {

        printf("o numero %d foi repetido %d vezes \n", i + 1, num[i]);
    }
return 0;}
