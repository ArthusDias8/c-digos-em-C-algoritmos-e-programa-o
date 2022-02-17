#include <stdio.h>
#define Media 9.5

double main (){
	double a, b, x, freq;
	printf("Valor da nota 1: ");
	scanf("%lf", &a);
	printf("Valor da nota 2: ");
	scanf("%lf", &b);
	printf("Digite a frequencia: ");
	scanf("%lf", &freq);
	x = (a + b)/2;
	printf("X = %.3lf", x);
	
	if (x >= Media && freq >= 75)
	printf("Parabens, aprovado!");
	else printf("Reprovado");
	
}
