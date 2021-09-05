/*Faça um algoritmo que leia duas frases (de no máximo 20 caracteres cada uma) e imprima se as frases
possuem o mesmo comprimento, bem como se são iguais ou diferentes no conteúdo. Exemplo:
Frase 1: Brasil Hexa 2010
Frase 2: Brasil! Hexa 2010!
Resultado: As duas frases são de tamanhos diferentes. As duas frases possuem conteúdo distintos.
Obs.: Considere que as frases não iniciam e nem terminam com espaço, bem como só existe um único espaço
entre as palavras das frases.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define tam 21

void ler(char frase1[tam], char frase2[tam]);

void imprime(char frase1[tam], char frase2[tam]);

void flush_in(){
  int ch;

  while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main(){

  char  frase1[tam], frase2[tam];

  ler(frase1, frase2);

  imprime(frase1, frase2);

  return 0;
}

void ler(char frase1[tam], char frase2[tam]){

  printf("\nDigite a primeira frase: ");
  scanf("%[^\n]s", frase1);
  flush_in();

  printf("\nDigite a segunda frase: ");
  scanf("%[^\n]s", frase2);
  flush_in();

}

void imprime(char frase1[tam],char frase2[tam]){

  int tam1, tam2, aux=1;

  tam1=strlen(frase1);
  tam2=strlen(frase2);

  if(tam1==tam2){
    printf("\nAs frases possuem o mesmo tamanho.");

    aux=strcmp(frase1, frase2);
    if(aux==0){
      printf("\nAs frases possuem o mesmo conteúdo.");
    }
  }

  if(tam1!=tam2){
    printf("\nAs frases não possuem o mesmo conteúdo.");
  }

}
