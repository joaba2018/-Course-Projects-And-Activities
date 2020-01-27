#include <stdio.h>
#include <stdlib.h>
int verificatema(int vagas,int tema){
    switch (tema){
    case 1:
           if (vagas < 2)
              return 1;
    break;
    case 2:
           if (vagas < 4)
              return 1;
    break;
    case 3:
           if (vagas < 3)
              return 1;
    break;
    }
    return 0;
}
int pegamateria()
{
    int materia;
    do{
          printf("Digite 1 para Inteligencia artificial \n");
          printf("Digite 2 para Sistemas distribuidos \n");
          printf("Digite 3 para computação paralela \n");
          scanf("%d",&materia);
    }while(!((materia == 1) || (materia == 2) || (materia == 3)));
    return materia;
}
int main()
{
    char aluno[4][20], nome[20];
     int materia[4], flagintart = 0, flagsistedis = 0, flagcomputpar = 0,i,primeiratentativa = 1;
     for (i=0;i<4;i++){
        if (primeiratentativa){
            printf("Informe seu nome \n");
            scanf("%s",nome);
            strcpy(aluno[i], nome);
        }
        materia[i] = pegamateria();
        switch (materia[i]){
               case 1:
                      if (verificatema(flagintart,materia[i])){
                          flagintart++;
                          primeiratentativa = 1;
                          }
                      else{
                          printf("Tema ja esta lotado! ja possui %d alunos \n",flagintart);
                          primeiratentativa = 0;
                          i--;
                         }
               break;
               case 2:
                      if (verificatema(flagsistedis,materia[i])){
                          flagsistedis++;
                          primeiratentativa = 1;
                          }
                      else{
                          printf("Tema ja esta lotado ja possui %d alunos! \n",flagsistedis);
                          primeiratentativa = 0;
                          i--;
                          }
               break;
               case 3:
                      if (verificatema(flagcomputpar,materia[i])){
                          flagcomputpar++;
                          primeiratentativa = 1;
                          }
                      else{
                          printf("Tema ja esta lotado ja possui %d alunos! \n",flagcomputpar);
                          primeiratentativa = 0;
                          i--;
                         }
               break;
        }
    }
         printf("Numero de orientandos para inteligencia artificial %d \n",flagintart);
         printf("Numero de orientandos para sistemas distribuidos  %d \n",flagsistedis);
         printf("Numero de orientandos para computacao paralela  %d \n",flagcomputpar);

    return 0;
}
