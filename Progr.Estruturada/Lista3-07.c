/*7) Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o nome de uma cidade (sem espaços) e a distância (em km) entre a mesma e Campos dos Goytacazes. Imagine que um usuário deseja saber quantos litros de combustível e quanto custaria abastecer tais litros para ele chegar a uma das cidades partindo de Campos. Assim, faça um algoritmo para ler (pelo teclado) a cidade de destino, o consumo do veículo do usuário (em km/l), o valor do litro de combustível e depois gerar um arquivo chamado "Gastos.txt" informando o nome da cidade de destino, quantos litros serão necessários para a viagem e o valor para abastecer tais litros. 
- Obs.: Utilize a função strcmp(str1,str2) da biblioteca string.h para comparar os
nomes das cidades. Esta função retorna 0 (zero) se str1 é igual a str2*/

#include <stdio.h>
#include <string.h>

int main(){

  FILE *distancias, *gastos;
  float km, consumo, valor, litros, valor_total;
  char cidade1[20], cidade2[20];

  distancias=fopen("Distancias.txt", "r");
  gastos=fopen("Gastos.txt", "w");

  printf("\nDigite a cidade de destino: ");
  scanf("%s", cidade1);
  printf("\nDigite o consumo do veículo: ");
  scanf("%f", &consumo);
  printf("\nDigite o valor do litro de combustível: ");
  scanf("%f", &valor);

  while(!feof(distancias)){
    fscanf(distancias, "%s %f", cidade2, &km);
    
    if(strcmp(cidade1, cidade2)==0){
      litros=km/consumo;
      valor_total=litros*valor;
      fprintf(gastos, "%s %.2f %.2f\n", cidade1, litros, valor_total);
    }
  }

  fclose(distancias);
  fclose(gastos);

  return 0;
}

