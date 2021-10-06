/*11) Considere um arquivo chamado "Matriz4x5.txt" que armazena uma matriz de
tamanho 4 x 5 de números inteiros. Faça um algoritmo para ler essa matriz do arquivo,
trocar a segunda coluna com a quinta e imprimir a nova matriz no arquivo chamado
"MatrizAlterada.txt". A matriz que receberá os valores lidos do arquivo deve ser
criada na função main( ) e não deve ser utilizada uma matriz auxiliar para realizar a
troca das colunas.
Utilize três procedimentos: um para ler a matriz do arquivo de entrada, outro para
realizar a troca das colunas e um terceiro para imprimir no arquivo de saída a matriz
alterada */

#include <stdio.h>

#define l 4
#define c 5

void ler_matriz(FILE *arq_entrada, int matriz[l][c]);
void trocar_colunas(int matriz[l][c]);
void imprimir_matriz(FILE *arq_alterado, int matriz[l][c]);

int main() {

  FILE *arq_entrada, *arq_alterado;
  int matriz[l][c];

  ler_matriz(arq_entrada, matriz);
  trocar_colunas(matriz);
  imprimir_matriz(arq_alterado, matriz);
 
  return 0;
}

void ler_matriz(FILE *arq_entrada, int matriz[l][c]){
  int i, j;

  arq_entrada=fopen("Matriz4x5.txt", "r");

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
void trocar_colunas(int matriz[l][c]){
  int i, aux;

  for(i=0;i<l;i++){
    aux=matriz[i][1];
    matriz[i][1]=matriz[i][4];
    matriz[i][4]=aux;
  }
}

void imprimir_matriz(FILE *arq_alterado, int matriz[l][c]){
  int i, j;

  arq_alterado=fopen("MatrizAlterada.txt", "w");

  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      fprintf(arq_alterado, "%d ", matriz[i][j]);
    }
    fprintf(arq_alterado, "\n");
  }
  fclose(arq_alterado);
}

