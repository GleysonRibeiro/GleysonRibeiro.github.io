/*20) Faça um algoritmo que leia uma matriz 10 x 3, onde as linhas representam os alunos e as colunas as 3 provas de cada aluno. Em seguida, imprima a maior nota e a
menor nota da prova 1, da prova 2 e da prova 3. Crie e utilize dois procedimentos: um para ler a matriz e outro para imprimir as informações.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int matriz[10][3]);

void imprimir(int matriz[10][3]);

int main(){

  int matriz[10][3];

  ler(matriz);

  imprimir(matriz);

  return 0;
}

void ler(int matriz[10][3]){

  int i, j;

  for(i=0;i<10;i++){
    for(j=0;j<3;j++){
      printf("\nDigite um valor: ");
      scanf("%d", &matriz[i][j]);
    }
  }
}


void imprimir(int matriz[10][3]){

  int i, j, menor, maior;

  for(j=0;j<3;j++){
    menor=matriz[j][0];
    maior=matriz[j][0];
    for(i=1;i<10;i++){
      if(matriz[i][j]<menor){
        menor=matriz[i][j];
      }
      if(matriz[i][j]>maior){
        maior=matriz[i][j];
      }      
    }
    printf("\nO menor valor da prova %d é: %d \nO maior valor da prova %d é: %d.", j+1, menor, j+1, maior);
  }
}