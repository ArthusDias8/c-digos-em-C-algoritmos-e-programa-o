//pontos flutuantes = numeros reais
//float = 4bytes %f
//double = 8bytes %lf

#include<stdio.h>
#define M1 3.5
#define M2 7.5

int main (){
	double a, b, x;
	printf("Usu�rio, digite o primeiro n�mero: ");
	scanf("%lf", &a);
	printf ("Usu�rio, digite o segundo n�mero: ");
	scanf("%lf", &b);
	x = ((a * M1) + (b * M2))/11;
	printf("X = %.3lf", x);
}
