#include <stdio.h>

int main(void) {
  int values[5];
  int i;
  int largeNumber;

  for(i = 0; i < 5; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &values[i]);
  }

  largeNumber = values[0];

  for(i = 1; i < 5; i++){
    
     if(values[i] > largeNumber){
       largeNumber = values[i];
     }
  }
 
  printf("O maior numero digitado foi %d", largeNumber);
}