#include <stdio.h>

int main(){
  // float nota = 0.0;

  // printf("Entre com uma nota entre 0 e 10: ");
  // int deu_certo = scanf("%f", &nota);

  // printf("Voce digitou: %.1f\n", nota);


  double pi = 0.0;
  printf("Entre com um valor de pi: ");
  int   deu_certo = scanf("%lf", &pi);

  printf("Voce digitou: %.100f\n", pi);

  return 0;

}