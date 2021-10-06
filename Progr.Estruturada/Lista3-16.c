/*16) Considere um arquivo chamado "Palavras.txt" que armazena em cada linha uma
palavra de no máximo 15 caracteres. Faça um algoritmo para ler pelo teclado uma
palavra (também de no máximo 15 caracteres) e imprimir o número de vezes que essa
palavra aparece no arquivo.
- Obs.: Utilize a função strcmp(str1,str2) da biblioteca string.h para comparar as
palavras. Esta função retorna 0 (zero) se str1 é igual a str2.*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minusculo(char string[15]);

int main() {
  char palavra1[15], palavra2[15];
  FILE *texto;
  int cont=0;

  texto=fopen("Palavras.txt", "r");

  printf("\nDigite uma palavra: ");
  scanf("%s", palavra1);
  minusculo(palavra1);

  while(!feof(texto)){
    fscanf(texto, "%s", palavra2);
    minusculo(palavra2);
    if(strcmp(palavra1, palavra2)==0){
      cont++;
    }    
  }
  
  printf("\nA palavra digitada aparece %d vezes.", cont);
  
  return 0;
}

void minusculo(char string[15]){
  int i=0;
  while(string[i]!='\0'){
    string[i]=tolower(string[i]);
    i++;
  }
}