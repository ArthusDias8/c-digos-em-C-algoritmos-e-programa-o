#include <stdio.h>

int main(){
	int idade;
	int i;

	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	// (inicializar a variável; condição de parada; auto incremento
	for(i=0; i<3; i++){
		//codigo que deve ser repetido
		
		printf("Digite a sua idade: ");
		scanf("%d", &idade);
		
		if(idade == 10)
		printf("Criança\n");
		else if(idade == 18)
	       printf("Adolecente\n");
	       else if(idade == 60)
	              printf("Adulto\n");
	              else if(idade == 100)
	                     printf("Idoso\n");
	                     else if(idade == 150)
	                            printf("Zumbi\n");
	                            else printf("Idade invalida\n");
	}
	printf("Fim!");
	
}
