#include <stdio.h>

int main(){
	int idade;
	char letra;
	char palavra[10];
	printf("Digite a letra: ");
	scanf("%c", &letra);
	fflush(stdin);//limpar buffer apenas para char e string
	printf("Digite a palavra: ");
	scanf("%s", &unicaPalavra);//não permite colocar espaços
	fflush(stdin);
	fgets(duasPalavras, 50, stdin);//perite colocar espaços
	
	printf("Letra: %c", letra);
	printf("Unica palavra: %s", unicaPalavra);
	printf("Duas palavra: %s", duasPalavra);
	
	 switch(letra){
     	case 'S': printf("digite S\n"); break;//break = utilizado para interromper processo, depois deconcluidos
     	case 'N': printf("digite N\n"); break;
     	case 'P': printf("digite P\n"); break;
     	case 'M': printf("digite M\n"); break;
     	default: printf("invalido");
	 }
}
