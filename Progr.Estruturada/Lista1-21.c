/*Faça um algoritmo que preencha o vetor A com 20 números inteiros gerados aleatoriamente de 0 até 10.
Em seguida, preencha o vetor B onde cada elemento Bi receba o fatorial do elemento Ai, com 0 ≤ i ≤ 19. Crie
e utilize dois procedimentos: um para preencher o vetor A e outro para preencher o vetor B. Crie e utilize
também uma função para calcular o fatorial de um número.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 20

void preencheA(int vetA[tam]);

void preencheB(int vetA[tam], int vetB[tam]);

int fatorial(int num);

int main(){

  int vetA[tam], vetB[tam];

  preencheA(vetA);

  preencheB(vetA, vetB);

  return 0;
}

void preencheA(int vetA[tam]){
  int i;

  srand(time(NULL));

  for(i=0;i<tam;i++){
    vetA[i]=rand()%10;
  }
}

void preencheB(int vetA[tam], int vetB[tam]){
  int i;

  printf("\nVetor A:\n ");

  for(i=0;i<tam;i++){
    printf("%d ", vetA[i]);
  }

  printf("\nFatorial de A - Vetor B:\n ");
  
  for(i=0;i<tam;i++){
    vetB[i]=fatorial(vetA[i]);
    printf("%d ", vetB[i]);
  }

}

int fatorial(int num){

  int i, fatorial=1;

  for(i=num;i>0;i--){
    fatorial*=i;
  }

  return fatorial;
}
