#include <stdio.h>

int main (){
  float notas[5]={0}, total, media = 0;
  int i;
  
  printf("insira 5 notas: \n");
  for(i=0; i < 5; i++){
  	scanf("%f", &notas[i]);
  	
  }
  
  for(i=0; i < 5; i++){
  	media += notas[i] /5;
  }
  printf("media: %2.f ", media);
  
  
  
}
