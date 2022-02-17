#include <stdio.h>
#define Média 9.5

double main (){
	double a, b, x;
	printf("Valor da nota 1: ");
	scanf("%lf", &a);
	printf("Valor da nota 2: ");
	scanf("%lf", &b);
	x = (a + b)/2;
	printf("X = %.3lf", x);
	
	if (x >= média)
	printf("Parabens, aprovado!");
	else printf("Reprovado");
	
}
