#include <stdio.h>

int main(){
	int idade;
	
	printf("ELEITORAL\n");
	
	printf("Informe a idade: ");
	scanf("%d",&idade);
	
	if(idade<0){
		printf("nao nasceu");
	}else{
		if(idade<16){
			printf("nao vota");
		}else{
			if(idade<18){
				printf("op");
			}else{
				if(idade<65)
					printf("obrig");
			}else{
				if(idade == 41){
					printf("premio");
			}else{
				if(idade == 82){
					printf("Premio 2");
				}else{
					printf("opcional");
				}
			}
			}
		}
	}
}
