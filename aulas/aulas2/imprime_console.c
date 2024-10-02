#include <stdio.h> // biblioteca de entrada e saida console

int main(){
  // imprime texto na tela
  //printf("te amo ana tu eh\n");

  // imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 10, 20);
  printf("%5i\n", 1);
  printf("%05i%%\n", 1);

  // imprime um numero decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 8.14159);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  // imprime um caractere
  printf("%c\n", 0);

  // imprime uma string
  printf("%30s!\n", "quero");
  printf("%30s!\n", "chupa");
  printf("%30s!\n", "seu");
  printf("%30s!\n", "cu");

  
  return 0;
  
}