#include <stdio.h>

int main(void){
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

     switch(idade){
     	case 0 ... 10: printf("criança"); break;//break = utilizado para interromper processo, depois deconcluidos
     	case 11 ... 18: printf("adulto"); break;
     	case 19 ... 60: printf("idoso"); break;
     	case 61 ... 100: printf("zumbi"); break;
     	default: printf("idade invalida");
	 }
}
