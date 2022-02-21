#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	float a, b, c, x1, x2, delta;
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	delta = (b * b) - 4 * a * c;
	x1 = (- b + sqrt(delta))/ (2 * a);//sqrt = utilizdo para a inplementação de raizes na linguage C
	x2 = (- b - sqrt(delta))/ (2 * a);
	
	if(delta < 0)
	printf("Impossivel calcular");
	       else{
	       	printf("O valor de x1: %.2fn", x1);
	       	printf("O valor de x2: %.2fn", x2);
		   } 
	
}
