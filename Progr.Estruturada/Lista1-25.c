/*Considere um vetor com 100 números lidos pelo teclado. Faça um algoritmo que imprima todos os números
que aparecem somente uma vez no vetor. Crie e utilize dois procedimentos: uma para preencher o vetor e
outro para imprimir o que se pede. Exemplo com um vetor de 10 números:
Vetor: {3, 1, 9, 8, 3, 10, 1, 5, 9, 1}
Números que aparecem somente uma vez: 8, 10, 5
Obs.: Não é permitido utilizar qualquer estrutura de dados auxiliar*/

#include <stdio.h>
#define tam 100

void preenche(int vetor[tam]);

void imprime(int vetor[tam]);

int main(){

  int vetor[tam];

  preenche(vetor);

  imprime(vetor);

  return 0;
}
void preenche(int vetor[tam]){

  int i;

  for(i=0;i<tam;i++){
    printf("\nDigite um número: ");
    scanf("%d", &vetor[i]);
  }
}

void imprime(int vetor[tam]){

  int i, j, aux;

  printf("\n\n");

  for(i=0;i<tam;i++){
    aux=0;
    for(j=0;j<tam;j++){

      if(j!=i){
        if(vetor[i]==vetor[j]){
          aux=1;
        }
      }
    }
    if(aux==0){
      printf("%d ", vetor[i]);
    }

  }
}

