#include <stdio.h>
#include <math.h>//biblioteca específica

#define PI 3.14159//usadado para definior uma váriavel

int main(){
	double area, raio;
	
	printf("Qual o raio: ");
	scanf("%lf", &raio);
	
	area = raio * raio * 3.14159;
	area = pow(raio, 2) * PI;
	printf("Area: %lf", area);
}
