#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define m 5
#define n 4

void gera(int matrizA[n][m], int matrizB[m][n]);

int verifica(int matrizA[n][m], int matrizB[m][n]);

int main(){

  int matrizA[n][m], matrizB[m][n];

  gera(matrizA, matrizB);

  if(verifica(matrizA, matrizB)==1){
    printf("\n\nCondição satisfeita.");
  }
  else{
    printf("\n\nCondição não satisfeita.");
  }

  return 0;
}

void gera(int matrizA[n][m], int matrizB[m][n]){

  int i, j;

  srand(time(NULL));

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      matrizA[i][j]=rand()%30+1;
      matrizB[j][i]=rand()%30+1;
    }
  }

  printf("\nMatriz A"); //Para teste
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<m;j++){
      printf("%d ", matrizA[i][j]);
    }
  }
  printf("\n\nMatriz B"); //Para teste
  for(i=0;i<m;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf("%d ", matrizB[i][j]);
    }
  }
}

int verifica(int matrizA[n][m], int matrizB[m][n]){

  int i, j, aux=0, menor, maior;

  for(j=0;j<m;j++){
    aux=0;
    for(i=0;i<m;i++){
      aux+=matrizA[i][j];
    }
    if(j==0){
      menor=aux;
    }
    else{
      if(aux<menor){
        menor=aux;
      }
    }
  }

  for(i=0;i<m;i++){
    aux=0;
    for(j=0;j<n;j++){
      aux*=matrizB[i][j];
    }
    if(i==0){
      maior=aux;
    }
    else{
      if(aux>maior){
        maior=aux;
      }
    }
  }

  if(menor<=maior){
    return 1;
  }
  else{
    return 0;
  }
}
