/*3) Faça um algoritmo que leia de um arquivo chamado "Medias.txt" o nome dos alunos
e as suas respectivas médias. Seu algoritmo deve ter como saída um arquivo chamado
"Aprovados.txt", que contém os nomes dos alunos com média igual ou superior a 7.0, e
outro arquivo chamado "Reprovados.txt", que contém os nomes dos alunos com média
inferior a 7.0.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  FILE *medias, *aprovados, *reprovados;
  char nome[20];
  float media;

  medias=fopen("Medias.txt", "r");
  aprovados=fopen("Aprovados.txt", "w");
  reprovados=fopen("Reprovados.txt", "w");

  while(!feof(medias)){

    fscanf(medias, "%s %f", nome, &media);

    if(media>=7.0){
      fprintf(aprovados, "%s %.2f\n", nome, media);
    }
    else{
      fprintf(reprovados, "%s %.2f\n", nome, media);
    }
  }

  return 0;
}