#include <stdio.h>

void head();//2 - sinalizo o procedimento

float soma(float n1, float n2);//2 - sinalizando a função

int main (){
	float n1, n2, som, sub, mult, div;
	char Calculadora;
  
	head();//3 - chamada do procedimento
	
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
		printf("RESULTADO: %.2f",soma(n1, n2));
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

void head(){//1 - declaração do procedimento
	printf("-------------\n");
	printf("Calculadora\n");
	printf("------------\n");
	
}
	
float soma(float n1, float n2){//1 - declaração da função
	float resultado;
	resultado = n1 + n2;
	return resultado;
}
