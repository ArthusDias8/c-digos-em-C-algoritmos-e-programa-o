#include <stdio.h>
#define M�dia 9.5

double main (){
	double a, b, x;
	printf("Valor da nota 1: ");
	scanf("%lf", &a);
	printf("Valor da nota 2: ");
	scanf("%lf", &b);
	x = (a + b)/2;
	printf("X = %.3lf", x);
	
	if (x >= m�dia)
	printf("Parabens, aprovado!");
	else printf("Reprovado");
	
}
