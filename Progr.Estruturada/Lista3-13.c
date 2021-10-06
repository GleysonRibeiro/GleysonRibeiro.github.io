/*13) Considere um arquivo chamado "Cidades.txt" que armazena em cada linha o nome
de uma cidade e o seu número de habitantes. Faça um algoritmo para ler esse arquivo e
criar um arquivo chamado "Populacao.txt" contendo o nome da cidade mais populosa
seguida pelo seu número de habitantes.
- Obs.: A função strcpy(str1,str2) da biblioteca string.h copia uma string para outra.
Ela copia a string str2 para a string str1.*/

#include <stdio.h>
#include <string.h>

int main() {

  FILE *cidades, *populacao;
  char cidade[40], populosa[40];
  int maior=0, pessoas=0;

  cidades=fopen("Cidades.txt", "r");
  populacao=fopen("Populacao.txt", "w");

  while(!feof(cidades)){
    fscanf(cidades, "%s %d", cidade, &pessoas);
    if(pessoas>maior){
      strcpy(populosa, cidade);
      maior=pessoas;
    }
  }

  fprintf(populacao, "%s %d", populosa, maior);

  fclose(cidades);
  fclose(populacao);
  
  return 0;
}