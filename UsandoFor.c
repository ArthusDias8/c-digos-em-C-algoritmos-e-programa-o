#include <stdio.h>

int main(){
	int i;
	int num;
	
 printf("informe o número: ");
 scanf("%d",&num);
  
  for(i=0; i< num; i++){
    if(num % 4 == 0){
      printf("M4");
    }
    if(num % 5 == 0){
      printf("M5");
    }
    if((num % 4 == 0) && (num % 5 == 0)){
      printf("bingo");
    }
    printf("%d ", i);
  }

  
}
