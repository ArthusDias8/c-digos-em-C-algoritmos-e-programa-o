#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char nome[50];
	int i = 0, tam = 0, espaco_id;
	
	printf("Nome: ");
	scanf("%[^\n]s", &nome);
	
	// printf("%s", nome);
	
	tam = strlen(nome);
	 for(i=0;i<tam;i++){
	 	if(nome[i]==' '){
	 		espaco_id = i;
		 }
	 }
	 // printf("%d", espaco_id);
	 
	 for(i=espaco_id+1;i<tam;i++){
	 	printf("%c", toupper(nome[i]));
	 }
	 printf("/\n");
	 
	 for(i=tam-1;i>=0;i--){
	 if(nome[i]==' '){
	 		espaco_id = i;
	 	}
		 }
		 
		for(i=0;i<espaco_id;i++){
	 		printf("%c", nome[i]);
	 }
		// printf("%d", espaco_id);
}


