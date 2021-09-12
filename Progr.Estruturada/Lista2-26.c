/*26) Um grafo simples não-direcionado G é k-regular se todos os vértices têm grau k.
Faça um algoritmo para ler pelo teclado a matriz de adjacência A(G) de um grafo
simples não-direcionado G com 15 vértices e imprimir na tela se G é ou não um grafo
k-regular. Em caso verdadeiro, imprima também o valor de k. Crie e utilize dois
procedimentos: um para ler a matriz pelo teclado e outro para imprimir o que se pede.*/

#include <stdio.h>
#include <stdlib.h>

#define tam 15

void ler(int matriz[tam][tam]);

void verifica(int matriz[tam][tam]);

int main(){

  int matriz[tam][tam];

  ler(matriz);

  verifica(matriz);

  return 0;
}

void ler(int matriz[tam][tam]){

  int i, j, aux;

  for(i=0;i<tam;i++){
    for(j=i;j<tam;j++){
      if(i==j){
        aux=0;
      }
      else{
        printf("\nDigite 0 ou 1 para aresta %d - %d: ", i+1, j+1);
        scanf("%d", &aux);
      }
      if((aux!=0)&&(aux!=1)){
        printf("\nDigite 0 ou 1!");
        j--;
      }
      else{
        matriz[i][j]=aux;
        matriz[j][i]=aux;
      }
    }
  }

  printf("\nMatriz de adjacencia A(G): ");
  for(i=0;i<tam;i++){
    printf("\n");
    for(j=0;j<tam;j++){
      printf("%d ", matriz[i][j]);
    }
  }
}

void verifica(int matriz[tam][tam]){
  int i, j, cont=0, aux=1, k;

  for(i=0;i<tam;i++){
    cont=0;
    for(j=0;j<tam;j++){
      cont+=matriz[i][j];
    }
    if(i==0){
      k=cont;
    }
    else{
      if(k==cont){
        aux++;
      }
    }
  }

  if(aux==tam){
    printf("\nA matriz G é k-reggular de grau %d.", k);
  }
  else{
    printf("\nA matriz não é k-regular.");
  }
}