#include <stdio.h>

int main (){
	int a, b, c, d;
	printf("informe o valor de A: ");
	scanf("%d", &a);
	printf("informe o valor de B: ");
	scanf("%d", &b);
	printf("informe o valor de C: ");
	scanf("%d", &c);
	printf("informe o valor de D: ");
	scanf("%d", &d);
	
	if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a%2 == 0)//% = módulo, 6%2 = 0, o resto da divisão. 
	printf("Valores aceitos");
	else printf("Valores nao aceitos");
	
	
	
	
	
}
