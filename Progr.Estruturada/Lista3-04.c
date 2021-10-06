/*4) Considere um arquivo chamado "Matriz4x4.txt" que armazena uma matriz
quadrada de ordem 4 com números inteiros. Faça um algoritmo para ler esta matriz do
arquivo e criar outro arquivo chamado "Transposta.txt" que conterá a matriz transposta
da matriz lida.
- Obs.: Utilize um procedimento para gerar a matriz transposta.*/

#include <stdio.h>

void criar_transposta(FILE *matrizEntrada, FILE *matrizSaida);

int main (){

  FILE *matrizEntrada, *matrizSaida;

  matrizEntrada=fopen("Matriz4x4.txt", "r");
  matrizSaida=fopen("Transposta.txt", "w");

  criar_transposta(matrizEntrada, matrizSaida);

  fclose(matrizEntrada);
  fclose(matrizSaida);

  return 0;
}

void criar_transposta(FILE *matrizEntrada, FILE *matrizSaida){

  int i, j, matriz[4][4];

  for(i=0;i<4;i++){
    for(j=0;j<4;j++){
      fscanf(matrizEntrada, "%d", &matriz[i][j]);
    }
  }
  for(j=0;j<4;j++){
    for(i=0;i<4;i++){
      fprintf(matrizSaida, "%d ", matriz[i][j]);
    }
    fprintf(matrizSaida, "\n");
  }
}

