/* Faça um algoritmo que leia uma frase (considerando os espaços) com no máximo 50 caracteres e imprima
esta mesma frase sem os espaços. Crie e utilize dois procedimentos: um para ler a frase e outro para a
impressão da mesma sem os espaços.*/

#include <stdio.h>
#include <string.h>

#define TAM 51

void ler(char string[TAM]);

void imprime(char string[TAM]);

int main(){

  char string[TAM];

  ler(string);

  imprime(string);

  return 0;

}

void ler(char string[TAM]){

  printf("\n\nDigite a frase:\n");
  scanf("%[^\n]s", string);
}

void imprime(char string[TAM]){

  int i, j=0;

  char semespaco[TAM];

  for(i=0;i<TAM;i++){
    if(string[i]!=' '){
      semespaco[j]=string[i];
      j++;
    }
  }

  printf("\n\n%s", semespaco);
   

}

