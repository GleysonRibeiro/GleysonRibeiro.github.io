/*Considere o vetor V com 50 números inteiros gerados aleatoriamente de 1 a 100. Faça um algoritmo que
modifique V de modo que:
Vi = X 49 j=0, i6=j Vj , 0 ≤ i ≤ 49 3
Crie e utilize três procedimentos: um para preencher o vetor, outro para modificá-lo e o terceiro para
realizar a impressão do vetor antes e depois da modificação.
Obs.: Não é permitido utilizar qualquer estrutura de dados auxiliar*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define tam 50

void preencher_vetor(int vet[tam]);
void modificar_vetor(int vet[tam]);
void imprime_vetor(int vet[tam]);

int main() {

  int vet[tam];

  preencher_vetor(vet);

  printf("\nVetor antes da modificação: ");
  imprime_vetor(vet);

  modificar_vetor(vet);
  printf("\nVetor depois da modificação: ");
  imprime_vetor(vet);

  return 0;
}

void preencher_vetor(int vet[tam]){

  int i=0;

  srand(time(NULL));
  
  for(i=0; i<tam; i++){
    vet[i]=rand()%100;
  }
}

void modificar_vetor(int vet[tam]){

  int i, j, aux;

  for(i=0;i<tam; i++){
    aux=0;
    for(j=0;j<tam;j++){
      if(i!=j){        
        aux+=vet[j];
      }
    }
    vet[i]=aux;    
  }
}

void imprime_vetor(int vet[tam]){

  int i;

  for(i=0;i<tam;i++){
    printf("%d ", vet[i]);
  }
}