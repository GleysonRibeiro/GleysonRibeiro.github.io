/*28) Faça um algoritmo para ler pelo teclado a matriz de adjacência A(D) de um dígrafo
simples D com 20 vértices e preencher a matriz de adjacência R(D’) de um dígrafo
simples D’, onde D’ possui os arcos reversos de D. Ou seja, D’ possui o arco (i,j) se, e
somente se, o arco (j,i) pertence a D. Crie e utilize dois procedimentos: um para ler a
matriz de adjacência A(D) pelo teclado e outro para preencher a matriz de adjacência
R(D’).*/

#include <stdio.h>

#define v 20

void ler(int matrizA[v][v]);

void preencher(int matrizA[v][v], int matrizB[v][v]);

void imprimir(int matrizA[v][v], int matrizB[v][v]);

int main(){
  int matrizA[v][v], matrizB[v][v];

  ler(matrizA);

  preencher(matrizA, matrizB);

  imprimir(matrizA, matrizB);

  return 0;
}

void ler(int matrizA[v][v]){
  int i,j, opcao;

  for(i=0;i<v;i++){
    for(j=i;j<v;j++){
      if(i==j){
        matrizA[i][j]=0;
      }
      else{
        printf("\nDigite 1 para definir um arco de %d para %d ou 2 para preencher um arco de %d para %d", i+1, j+1, j+1, i+1);
        scanf("%d", &opcao);
        if(opcao==1){
          matrizA[i][j]=1;
          matrizA[j][i]=0;
        }
        if(opcao==2){
          matrizA[i][j]=0;
          matrizA[j][i]=1;
        }
        if((opcao!=1)&&(opcao!=2)){
          j--;
          printf("\nDigite um opção válida");
        }        
      }
    }
  }
}

void preencher(int matrizA[v][v], int matrizB[v][v]){

  int i, j;

  for(i=0;i<v;i++){
    for(j=i;j<v;j++){
      if(i==j){
        matrizB[i][j]=0;
      }
      if(matrizA[i][j]==1){
        matrizB[i][j]=0;
        matrizB[j][i]=1;
      }
      if(matrizA[i][j]==0){
        matrizB[i][j]=1;
        matrizB[j][i]=0;
      }
      if((matrizA[i][j]!=1)&&(matrizA[i][j]!=0)){
        printf("\nHá um erro na matriz!");
      }
    }
  }
}
void imprimir(int matrizA[v][v], int matrizB[v][v]){
  int i, j;

  printf("\nMatriz A(D)\n");
  for(i=0;i<v;i++){
    printf("\n");
    for(j=0;j<v;j++){
      printf("%d ", matrizA[i][j]);
    }
  }
  printf("\n\nMatriz R(D')\n");
  for(i=0;i<v;i++){
    printf("\n");
    for(j=0;j<v;j++){
      printf("%d ", matrizB[i][j]);
    }
  }
}

