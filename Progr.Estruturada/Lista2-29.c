/*29) Faça um algoritmo para ler pelo teclado a matriz de adjacência A(D) de um dígrafo
simples D com 10 vértices e imprimir na tela todos os ciclos elementares de
comprimento 3 presentes em D. Crie e utilize dois procedimentos: um para ler a matriz
de adjacência A(D) pelo teclado e outro para imprimir na tela o que se pede.
Obs.: Exemplos de ciclos elementares de comprimento 3 (representados pela sequência
de vértices) presentes no grafo D da Figura 2: 1-2-5-1; 2-5-1-2; 5-1-2-5.*/

#include <stdio.h>
#define v 10

void ler(int matriz[v][v]);

void imprimir_ciclo(int matriz[v][v]);

int main(){
  int matriz[v][v];

  ler(matriz);

  imprimir_ciclo(matriz);

  return 0;
}

void ler(int matriz[v][v]){
  int i,j, opcao;

  for(i=0;i<v;i++){
    for(j=i;j<v;j++){
      if(i==j){
        matriz[i][j]=0;
      }
      else{
        printf("\nDigite ""1"" para preencher um arco de %d para %d \nou ""2"" para preencher um arco de %d para %d\nou ""3"" para não preencher:\n ", i+1, j+1, j+1, i+1);
        scanf("%d", &opcao);
        if(opcao==1){
          matriz[i][j]=1;
          matriz[j][i]=0;
        }
        if(opcao==2){
          matriz[i][j]=0;
          matriz[j][i]=1;
        }
        if(opcao==3){
          matriz[i][j]=0;
          matriz[j][i]=0;
        }
        if((opcao!=1)&&(opcao!=2)&&(opcao!=3)){
          j--;
          printf("\nDigite um opção válida");
        }        
      }
    }
  }
}

void imprimir_ciclo(int matriz[v][v]){
  int i,j,k,auxiliar=0;

	for (i = 0; i < v; ++i){
		for (j = 0; j < v; ++j){
			if (matriz[i][j] == 1)
			{
				for (k = 0; k < v; ++k)
				{
					if (matriz[j][k] == 1)
					{
						if (matriz[k][i] == 1)
						{
							printf("Ciclo: %d %d %d %d\n",i+1 ,j+1, k+1, i+1);
							auxiliar = 1;
						}
					}
				}
			}
		}
	}
	
	if (auxiliar == 0)
	{
		printf("Nao existe ciclo elementar!\n");
	}
}

