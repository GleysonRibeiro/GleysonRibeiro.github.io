/*Considere o vetor V com n números inteiros lidos pelo teclado, sendo n = 30. Faça um algoritmo para ler
pelo teclado na função main o número inteiro k (1 ≤ k ≤ 4) e imprimir o que se pede na expressão abaixo:
Max 0≤i≤n−k i+(X k−1) j=i Vj
Crie e utilize um procedimento para ler o vetor e uma função para retornar o que se pede. A impressão
desta informação deve ser realizada na função main.
Obs.: Não é permitido utilizar qualquer estrutura de dados auxiliar.*/



#include <stdio.h>

#define n 10

void preencheVetor(int V[n]);

int maximo(int V[n], int k);

int main() {

  int V[n], k;

  preencheVetor(V);
  
  printf("\n\nDigite o valor de k: ");
  scanf("%d", &k);

  printf("\nO valor que se pede é: %d", maximo(V, k));

  return 0;
}

void preencheVetor(int V[n]){
  int i;

  for(i=0;i<n;i++){
    printf("/nDigite o valor %d: ", i+1);
    scanf("%d", &V[i]);
  }
}

int maximo(int V[n], int k){
  int max=0, i=0, j=0, aux=0;

  for(i=0;i<=n-k;i++){
    for(j=i;j<i+k;j++){
      if(i==0){
        max+=V[j];
      }
      if(i!=0){
        aux+=V[j];
      }
    }
    if(aux>max){
      max=aux;
    }
    aux=0;
  }

  return max;
}