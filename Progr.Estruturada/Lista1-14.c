/* Faça um algoritmo que leia uma frase (considerando os espaços) com no máximo 30 caracteres e verique
se uma letra (lida pelo teclado na função main ) existe na frase. Crie e utilize um procedimento para ler a
frase e uma função para a vericação. A impressão da informação tem que ser feita na função main .
Obs .: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define tam 31

void ler(char frase[tam]);

int verificar (char frase[tam], char letra[1]);

int main (){

  char frase[tam], letra[2];

  int aux=0;

  ler(frase);

  printf("\nDigite a letra:");
  scanf("%s", letra);
  
  aux=verificar(frase, letra);

  if(aux==1){
    printf("\nA letra pertence a frase");
  }
  if(aux==0){
    printf("\nA letra não pertence a frase");
  }

  return 0;
}

void ler(char frase[tam]){

  printf("\nDigite a frase: ");
  scanf("%[^\n]s", frase);
}

int verificar (char frase[tam], char letra[2]){

  int i=0, aux=0;
  char testFrase, testLetra;
  testLetra=tolower(letra[0]);
     
  for(i=0;i<tam;i++){
    testFrase=tolower(frase[i]); 
    if(testFrase==testLetra){
      return 1;
    }
    printf("\nPassou %d", i);
    
  }
  return 0;

}