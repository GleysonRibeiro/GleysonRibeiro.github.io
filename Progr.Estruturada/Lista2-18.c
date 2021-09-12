/*18) Faça um algoritmo que leia uma matriz 3 x 3 de números inteiros. Depois, calcule e armazene na posição i de um vetor de tamanho 3 a soma dos valores da coluna i da
matriz (0 ≤ i ≤ 2), imprimindo em seguida o vetor. Crie e utilize dois procedimentos:
um para ler a matriz e outro para preencher e imprimir o vetor. O vetor também deve ser
declarado na função main. Ex.:
5 9 6
12 4 8
18 0 2
35 13 16*/

#include <stdio.h>
#define tam 3

void preencheMatriz(int mat[tam][tam]);

void preencheVetor(int vetor[tam], int mat[tam][tam]);

void imprimirMatriz(int mat[tam][tam]);

int main() {

  int mat[tam][tam], vetor[tam];

  preencheMatriz(mat);

  imprimirMatriz(mat);

  preencheVetor(vetor, mat);
  
  return 0;
}

void preencheMatriz(int mat[tam][tam]){
  int i, j;

  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      printf("\nDigite o valor da posição %d %d: ", i+1, j+1);
      scanf("%d", &mat[i][j]);
    }
  }
}

void preencheVetor(int vetor[tam], int mat[tam][tam]){
  int i, j;

  for(j=0;j<tam;j++){
    vetor[j]=0;
    for(i=0;i<tam;i++){
      vetor[j]+=mat[i][j];
    }
  }
  for(i=0;i<tam;i++){
    printf("%d ", vetor[i]);
  }
}


void imprimirMatriz(int mat[tam][tam]){
  int i, j;

  for(i=0;i<tam;i++){
    for(j=0;j<tam;j++){
      printf("%d  ", mat[i][j]);
    }
    printf("\n");
  }
}
