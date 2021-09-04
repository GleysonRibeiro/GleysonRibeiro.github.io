/* Faça um algoritmo para preencher um vetor (de tamanho 10) com elementos gerados aleatoriamente de 1 a
20, de maneira que não sejam inseridos números iguais no vetor, ou seja, todos os números contidos no vetor
têm que ser distintos. Crie e utilize dois procedimentos: um para preencher o vetor e outro para imprimi-lo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void preenche(int vet[TAM]);

void imprime(int vet[TAM]);

int main (){

  int vet[TAM]={0};

  

  preenche(vet);

  

  imprime(vet);

  
  
  return 0;
}

void preenche(int vet[TAM]){

  int i, j, aux, igual=0;

  srand(time(NULL));

  
  for(i=0;i<TAM;i++){
    for(j=0;j<i;j++){
      do{
        aux=rand()%20+1;
        if(aux==vet[j]){
          igual=1;
        }
      }while(igual==1);      
    }
    vet[i]=aux;
  }

}


void imprime(int vet[TAM]){

  int i;

  printf("\n\nVetor:  ");

  for(i=0;i<TAM;i++){
    printf("%d ", vet[i]);
  }
}

