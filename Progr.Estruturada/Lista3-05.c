/*5) Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o
nome de uma cidade (sem espaços) e a distância (em km) entre a mesma e Campos dos
Goytacazes. Imagine que um usuário deseja saber quantos litros de combustível e
quanto custaria abastecer tais litros para ele chegar a cada uma das cidades partindo de
Campos. Faça um algoritmo para ler (pelo teclado) o consumo do veículo do usuário
(em km/l), o valor do litro de combustível e depois gerar um arquivo chamado
"Gastos.txt" informando (em cada linha) o nome da cidade, quantos litros serão
necessários para a viagem e o valor para abastecer tais litros.*/

#include <stdio.h>
#include <string.h>

int main(){

  FILE *distancias, *gastos;
  float km, consumo, valor, litros, valor_total;
  char cidade[20];

  distancias=fopen("Distancias.txt", "r");
  gastos=fopen("Gastos.txt", "w");

  printf("\nDigite o consumo do veículo: ");
  scanf("%f", &consumo);
  printf("\nDigite o valor do litro de combustível: ");
  scanf("%f", &valor);

  while(!feof(distancias)){
    fscanf(distancias, "%s %f", cidade, &km);
    litros=km/consumo;
    valor_total=litros*valor;
    fprintf(gastos, "%s %.2f %.2f\n", cidade, litros, valor_total);
  }

  fclose(distancias);
  fclose(gastos);

  return 0;
}

