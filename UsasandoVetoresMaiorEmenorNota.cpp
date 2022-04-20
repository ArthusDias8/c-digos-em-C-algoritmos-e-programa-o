#include <stdio.h>

int main (){
	printf("MEDIA DOS ALUNOS\n");
	
  	float notas[10]={0}, maior = 0, menor;
  	int i, nota = 0, tam = 0;
  	char continuar = 's';

  	do{
  		printf("Informe a nota %d: ", i+1);
    	scanf("%f", &notas[i]);
    	i++;
    	
    	printf("Deseja continuar (s/n)?\n");
    	scanf(" %c", &continuar);
	}while(i<10 && continuar=='s');//enquanto
	
	
	tam = i;
	
  	for(i=0; i<tam; i++){
  		//printf("Nota %d: %.1f\n",i+1,notas[i]);
  	
      if(i==0){
        maior = notas[i];
        menor = notas[i];
      }else{
        if(notas[i] > maior){
          maior = notas[i];
        }
        if(notas[i] < menor){
          menor = notas[i];
        }
      }
  }
    printf("A maior nota: %.2f\n", maior);
    printf("A menor nota: %.2f\n", menor);
  
  
  
}
  
