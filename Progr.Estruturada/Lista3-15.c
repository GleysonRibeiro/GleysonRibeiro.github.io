/*15) Faça um algoritmo para imprimir o número de palavras (de no máximo 20
caracteres) presentes no arquivo "Texto.txt". Considere que o arquivo não possui
qualquer número, somente palavras.*/


#include <stdio.h>
#include <string.h>

int main() {
  FILE *arquivo;
  int soma=0;
  char palavra[50];

  arquivo=fopen("Texto.txt", "r");

  while(!feof(arquivo)){
    fscanf(arquivo, "%s", palavra);
    if(strlen(palavra)<21){
      soma++;
    }
  }

  printf("\nA quantidade de palavras com menos de 20 caracteres é: %d", soma);
  fclose(arquivo);
  
  return 0;
}