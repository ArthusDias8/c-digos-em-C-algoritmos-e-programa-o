#include <stdio.h>

double main (){
	double a, b, x;
	printf("Valor da nota 1: ");
	scanf("%lf", &a);
	printf("Valor da nota 2: ");
	scanf("%lf", &b);
	x = (a + b)/2;
	printf("X = %.3lf", x);
	
	if (x >= 9.5)
	printf("Parabens, aprovado!");
	else printf("Reprovado");
	
}
