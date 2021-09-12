/*19) Considere uma matriz quadrada de ordem 6 gerada aleatoriamente com números de 1 até 30. Faça um algoritmo que calcule e imprima a soma dos elementos dessa matriz
que não pertençam à diagonal principal nem à diagonal secundária. Crie e utilize um procedimento para a geração da matriz e uma função para retornar a soma. A impressão da soma tem que ser na função main.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 6

void gerarMatriz(int matriz[tam][tam]);

int somarMatriz(int matriz[tam][tam]);

void imprimirMatriz(int mat[tam][tam]);

int main() {

  int i, j, matriz[tam][tam];

  gerarMatriz(matriz);

  imprimirMatriz(matriz);

  printf("\nO resultado da soma é: %d", somarMatriz(matriz));
  
  return 0;
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

void gerarMatriz(int matriz[tam][tam]){

  int i, j;

  srand(time(NULL));

  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      matriz[i][j]=rand()%30+1;
    }
  }
}

int somarMatriz(int matriz[tam][tam]){

  int i, j, soma=0;

  for(i=0;i<tam;i++){
    for(j=i;j<tam;j++){
      if(i!=j&&i+j!=tam){
        soma+=matriz[i][j];
        soma+=matriz[j][i];
      }
    }
  }
  return soma;
}