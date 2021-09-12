/*25) Faça um algoritmo para ler pelo teclado a
matriz de adjacência A(G) de um grafo simples não-direcionado G com 10 vértices e
imprimir na tela o grau de cada vértice. Crie e utilize dois procedimentos: um para ler a
matriz pelo teclado e outro para imprimir o que se pede.*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

void ler(int matriz[tam][tam]);

void imprime(int matriz[tam][tam]);

int main(){

  int matriz[tam][tam];

  ler(matriz);

  imprime(matriz);

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

void imprime(int matriz[tam][tam]){

  int i, j, cont=0;

  for(i=0;i<tam;i++){
    cont=0;
    for(j=0;j<tam;j++){
      cont+=matriz[i][j];
    }
    printf("\n\nO grau do vértice %d é: %d", i+1, cont);
  }
}