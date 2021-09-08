/*30) Considere os vetores V1 e V2, ambos com 40 números inteiros lidos pelo teclado, e dois números inteiros x(x 6= 0) e y (y 6= 0) lidos pelo teclado na função main. Faça um algoritmo para verificar se a condição abaixo é verdadeira:
X39i=0,i ímparx × |V1i| ≤Y39j=0,j pary × V2j
Crie e utilize um procedimento para ler os dois vetores e uma função para retornar 1, se a condição éverdadeira, ou retornar 0 caso contrário. A impressão da informação (se a condição é verdadeira ou não) deveser realizada na função main.
Obs.: Não é permitido utilizar qualquer estrutura de dados auxiliar*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 40

void preencheVetores(int V1[tam], int V2[tam]);

int verificar(int V1[tam], int V2[tam], int x, int y);

int main(void) {
  int x=1, y=1, V1[tam], V2[tam];

  preencheVetores(V1, V2);

  printf("\nDigite o valor de x:");
  scanf("%d", &x);
  printf("\nDigite o valor de y:");
  scanf("%d", &y);

  if(verificar(V1, V2, x, y)==1){
    printf("\nA condição é verdadeira.");
  }
  else{
    printf("\nA condição é falsa");
  }
  return 0;
}

void preencheVetores(int V1[tam], int V2[tam]){
  int i;
  srand(time(NULL));

  for(i=0;i<tam;i++){
    V1[i]=rand()%40+1;
    V2[i]=rand()%40+1;
  }
}

int verificar(int V1[tam], int V2[tam], int x, int y){

  int i, j, soma=0, mult=1;

  for(i=1;i<tam;i+=2){
    soma+=x*V1[i];
  }
  for(j=0;j<tam;j+=2){
    mult*=y*V2[j];
  }

  if(soma<=mult){
    return 1;
  }
  return 0;

}