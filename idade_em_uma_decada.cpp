#include <stdio.h>

//2 _ prototipa��o
int em_uma_decada(int minha_idade);

int main(){
	int idade = 0, idade_mais_10 = 0;
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
//3 - chamada da declara��o
	em_uma_decada(idade);
	idade_mais_10 = em_uma_decada(idade);
	printf("%d\n",em_uma_decada(idade));
	printf("%d\n",idade_mais_10);
	printf("Valor acima em uma decada com base na idade informada: %d\n",idade);
	return 0;
}

//1 - declara��o
int em_uma_decada(int minha_idade){
	//printf("@ idade informada: %d\n", minha_idade);
	return minha_idade + 10;
}


 	//modulariza��o
 	//subprogramas
 	
 	//fun��es: return
	//procedimento: n�o tem retorno "void"
	
	//3 momentos:
		//declara��o
		//sinaliza��o/prot�tipa��o
		//declara��o


