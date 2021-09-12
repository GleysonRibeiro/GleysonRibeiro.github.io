/*24) Faça um algoritmo para, primeiro, ler pelo teclado todos os 30 números naturais
(maiores do que 1) da matriz M4x5 e, em seguida, imprimir na tela a quantidade de
números primos que M possui. Crie e utilize dois procedimentos: um para ler a matriz
e outro para calcular e imprimir a quantidade de números primos. Crie e utilize também
uma função que retorna 1, se um número natural for primo, ou retorna 0, caso contrário.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define L 4
#define C 5

void ler(int matriz[L][C]);

void calcula(int matriz[L][C]);

int verifica(int numero);

int main(){

  int matriz[L][C];

  ler(matriz);

  calcula(matriz);

  return 0;
}

void ler(int matriz[L][C]){

  int i, j, numero;

  for(i=0;i<L;i++){
    for(j=0;j<C;j++){
      printf("\nDigite um número maior que 1: ");
      scanf("%d", &numero);
      if(numero<2){
        printf("\nNúmero inválido.");
        j--;
      }
      else{
        matriz[i][j]=numero;
      }
    }
  }
  for(i=0;i<L;i++){
    printf("\n");
    for(j=0;j<C;j++){
      printf("%d ", matriz[i][j]);
    }
  }
}

void calcula(int matriz[L][C]){

  int i, j, cont=0;

  printf("\n\n");

  for(i=0;i<L;i++){
    for(j=0;j<C;j++){
      if(verifica(matriz[i][j])==1){
        printf("%d ", matriz[i][j]);
        cont++;
      }
    }
  }

  printf("\nA matriz possui %d número primos.", cont);
}

int verifica(int numero){

  int i;

  for(i=numero-1;i>1;i--){
    if(numero%i==0){
      return 0;
    }
  }

  return 1;
}