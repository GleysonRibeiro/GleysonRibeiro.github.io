/*12) Considere um arquivo chamado "Matriz5x6.txt" que armazena uma matriz de
tamanho 5 x 6 de números inteiros. Faça um algoritmo para ler essa matriz do arquivo,
realizar a soma dos elementos da segunda, quarta e sexta colunas e imprimir o resultado
da soma no arquivo chamado "Soma.txt". A matriz que receberá os valores lidos do
arquivo deve ser criada na função main( ).
Utilize uma função para realizar o cálculo da soma (retornando esse valor para a
função main( )) e dois procedimentos: um para ler a matriz do arquivo de entrada e
outro para imprimir no arquivo de saída o resultado da soma*/


#include <stdio.h>
#define l 5
#define c 6

int somar(int matriz[l][c]);
void ler_matriz(FILE *arq_entrada, int matriz[l][c]);
void imprimir_resultado(FILE *arq_saida, int num);

int main() {
  int matriz[l][c], num;
  FILE *arq_entrada, *arq_saida;

  ler_matriz(arq_entrada, matriz);
  num=somar(matriz);
  imprimir_resultado(arq_saida, num);  

  return 0;
}

void ler_matriz(FILE *arq_entrada, int matriz[l][c]){
  int i, j;

  arq_entrada=fopen("Matriz5x6.txt", "r");

  if(arq_entrada==NULL){
    printf("Erro na abertura do arquivo");
  }

  for(i=0;i<l;i++){
    for(j=0;j<c;j++){

      fscanf(arq_entrada, "%d", &matriz[i][j]);
    }
  }
  fclose(arq_entrada);
}
int somar(int matriz[l][c]){
  int i, j, num=0;

  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if((j+1)%2==0){
        num+=matriz[i][j];
      }
    }
  }
  return num;
}
void imprimir_resultado(FILE *arq_saida, int num){
  arq_saida=fopen("Soma.txt", "w");
  fprintf(arq_saida, "%d", num);
  fclose(arq_saida);
}