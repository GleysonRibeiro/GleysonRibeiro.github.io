/*17) Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento de uma linha onde se encontra o maior elemento da matriz. Faça um algoritmo para gerar uma matriz quadrada 10 x 10 com números aleatórios de 1 até 50 e imprimir o seu elemento minimax. Crie e utilize um procedimento para a geração da matriz e uma função para retornar o elemento minimax. A impressão desse elemento tem que ser na função main.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

void gerarMatriz(int mat[tam][tam]);

int retornaMinimax(int mat[tam][tam]);

void imprimirMatriz(int mat[tam][tam]);

int main() {

  int mat[tam][tam];

  gerarMatriz(mat);

  imprimirMatriz(mat);

  printf("O elemento Minimax é: %d", retornaMinimax(mat));
  
  return 0;
}

void gerarMatriz(int mat[tam][tam]){

  int i, j;

  srand(time(NULL));

  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      mat[i][j]=rand()%50+1;
    }
  }
}

int retornaMinimax(int mat[tam][tam]){
  int i, j, k, max, min;

  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      if(i==0&&j==0){
        max=mat[i][j];
        for(k=0;k<tam;k++){
          if(k==0){
            min=mat[i][k];
          }
          else{
            if(mat[i][k]<min){
              min=mat[i][k];
            }
          }
        }
      }
      else{
        if(mat[i][j]>max){
          max=mat[i][j];
          for(k=0;k<tam;k++){
            if(k==0){
              min=mat[i][k];
            }
            else{
              if(mat[i][k]<min){
                min=mat[i][k];
              }
            }
          }          
        }
      }
    }
  }
  

  return min;
}

void imprimirMatriz(int mat[tam][tam]){
  int i, j;

  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      printf("%d  ", mat[i][j]);
    }
    printf("\n");
  }
}