/*2) Suponha que cada aluno faça três provas, como mostra cada linha do arquivo
"Notas.txt". Faça um algoritmo para gerar o arquivo "Situacao.txt", onde cada linha
contenha a média final do aluno e sua situação: “A” – Aprovado (média igual ou
superior a 5.0) ou “R” – Reprovado (média inferior a 5.0).*/
 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>


 int main (){

  FILE *notas;
  FILE *situacao;

  float media, n1, n2, n3;

  notas=fopen("Notas.txt", "r");
  situacao=fopen("Situacao.txt", "w");

  while(!feof(notas)){
    fscanf(notas,"%f %f %f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    if(media>=5.0){
      fprintf(situacao,"aprovado %.2f\n", media);
    }
    else{
      fprintf(situacao, "reprovado %.2f\n", media);
    }
  }
 
  fclose(notas);
  fclose(situacao);
    
 }