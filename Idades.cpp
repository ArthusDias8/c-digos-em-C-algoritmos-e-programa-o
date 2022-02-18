#include <stdio.h>

int main(){
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade == 10)
	printf("Criança\n");
	else if(idade == 18)
	       printf("Adolecente");
	       else if(idade == 60)
	              printf("Adulto");
	              else if(idade == 100)
	                     printf("Idoso");
	                     else if(idade == 150)
	                            printf("Zumbi");
	                            else printf("Idade invalida");
	                     
	
	
	
}
