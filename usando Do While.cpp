#include <stdio.h>
int main(){

	char opcao;
	int r, a = 2, b = 5;
	
	do{
			printf("somar\n");
			r = a +b;
			printf("%d\n", r);
			printf("Desaja realizar um novo calculo?\n");
			scanf("%c", &opcao);
			fflush(stdin);	
		
	}while(opcao=='S'|| opcao == 's');
}
