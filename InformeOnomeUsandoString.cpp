#include <stdio.h>
#include <string.h>

int main(){
	char nome[50];
	int tamanho = 0;
	
	printf("Informe o nome: ");
	scanf("%[^\n]s", &nome);
	
	printf("Nome informado: %s\n", nome);
	
	printf("Primeira letra: %c\n", nome[0]);
	
	tamanho = strlen(nome);
	
	printf("Tamanho do nome: %d", tamanho);
	return 0;
}
