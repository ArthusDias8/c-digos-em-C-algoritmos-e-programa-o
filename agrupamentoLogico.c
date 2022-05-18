#include <stdio.h>
#include <string.h>

int main(){
	
	struct Estudante {
		int matricula;
		char nome [200];
		float media, nota[60];
	};
	int i;
	struct Estudante estudante[4];
	
for(i=0; i < 10; i++){
	printf("Digite o nome do %d aluno: \n", i+1);
    scanf("%s", &estudante[i].nome);
    for(i=0; i < 4; i++){
      printf("Digite o nota do %d aluno: ", i+1);
	    scanf("%f", &estudante[i].nota);
	}

}
	
}
