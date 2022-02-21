#include <stdio.h>

int main(){
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 0 && idade <= 10)
	printf("Criança\n");
	
	else if(idade >= 11 && idade <= 18)
	       printf("Adolecente\n");
	       
	       else if(idade >= 19 && idade <= 60)
	              printf("Adulto\n");
	              
	              else if(idade >= 61 && idade <= 100)
	                     printf("Idoso\n");
	                     
	                     else if(idade > 150)
	                            printf("Zumbi\n");
	                            
	                            else printf("Idade invalida\n");
	                     
	
	
	
}
