/*Faça um algoritmo para ler uma palavra pelo teclado (com no máximo 15 caracteres) e vericar se ela é
Palíndrome ou não, sem utilizar qualquer estrutura de dados auxiliar. Crie e utilize um procedimento
para ler a palavra e uma função para fazer a vericação. A impressão da mensagem (se a palavra é ou não
Palíndrome) deve ser na função main.
Obs. 1: Uma palavra Palíndrome é aquela que lida de frente para trás e de trás para frente tem a mesma
sequência de caracteres. Exemplos: arara, ovo, asa, radar, matam, etc;
Obs. 2: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define tam 16

void ler(char palavra[tam]);

int verificar(char palavra[tam]);

void flush_in(){
  int ch;

  while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main(){

  int aux;
  char palavra[tam];

  ler(palavra);

  aux=verificar(palavra);

  if(aux==1){
    printf("\nA palavra é palíndrome");
  }
  if(aux==0){
    printf("\nA palavra não é palíndrome");
  }

  return 0;
}

void ler(char palavra[tam]){

  printf("\nDigite a palavra: ");
  scanf("%s", palavra);
  flush_in();
}

int verificar(char palavra[tam]){
  int i=0, j=0, tamPalavra=0, aux=0;
  char letra1[2], letra2[2];

  //comentários inseridos para testes

  tamPalavra=strlen(palavra);
  //printf("\nTamanho da palavra: %d", tamPalavra);
  j=tamPalavra-1;
  //printf("\nValor de j: %d", j);

  for(i=0;i<tamPalavra;i++){
    //printf("\nEntrou no for: i = %d e j = %d" , i, j);
    
    letra1[0]=tolower(palavra[i]);
    //printf("\nConteúdo em letra1: %s", letra1);
    letra2[0]=tolower(palavra[j]);
    //printf("\nConteúdo em letra2: %s", letra2);
    aux=strcmp(letra1, letra2);
    //printf("\nResultado do teste: %d", aux);
    if(aux!=0){
      printf("\nTeste foi negativo!");
      return 0;
    }
    j--;
  }
  
  return 1;  
}