#include <stdio.h>

int main (){
	float n1, n2, som, sub, mult, div;
	char Calculadora;
  
	printf("-------------\n");
	printf("Calculadora\n");
	printf("------------\n");
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
	
	printf("+ - soma\n");
	printf("- - subtracao\n");
	printf("/ - divisao\n");
	printf("* - multiplicacao\n");
    scanf(" %c", &Calculadora);
	
	printf("Digite um outro numero: ");
	scanf("%f", &n2);
	
	switch(Calculadora){
		
		case '+': 
		som = n1 + n2; 
		printf("%f + %f = %.2f: ", n1, n2, som);
		break;
		
		case '-': 
		sub = n1 - n2; 
		printf("%f - %f = %.2f: ", n1, n2, sub);
		break;
		
		case '/': 
		div = n1 / n2; 
		printf("%f / %f = %.2f: ", n1, n2, div);
		break;
		
		case '*': 
		mult = n1 * n2; 
		printf("%f * %f = %.2f: ", n1, n2, mult);
		break;
		
	}

}
