#include <stdio.h>

int main (){
	printf("MEDIA DOS ALUNOS\n");
	
  	float notas[10]={0}, media = 0, maior = 0, menor =0;
  	int i, nota = 0;

  do{
  	  printf("Quantas notas deseja analisar: ");
      scanf("%d", &nota);
    }while(nota > 10 || nota < 1);
  	for(i=0; i < nota; i++){
  		scanf("%f", &notas[i]);
  		media += notas[i] /nota;

      if (i == 0){
        maior = notas[i];
        menor = notas[i];
      }else{
        if (notas[i] > maior){
          maior = notas[i];
        }
        if (notas[i] < menor){
          menor = notas[i];
        }
      }
  }
    printf("Media das notas: %.2f\n", media);
    printf("A maior nota é: %.2f\n", maior);
    printf("A menor nota é: %.2f\n", menor);
  
  
  
}
