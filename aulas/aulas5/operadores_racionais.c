#include <stdio.h>

int main(){
  // Entrada
  int numero1;
  int numero2;

  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero1);
  printf("Entre com outro numero: ");
  deu_certo = scanf("%i", &numero2);

  // Processamento
  int igual = numero1 == numero2;
  int diferente = numero1 != numero2;
  int menor = numero1 < numero2;
  int menor_ou_igual = numero1 <= numero2;
  int maior = numero1 > numero2;
  int maior_ou_igual = numero1 >= numero2;

  // Saida
  printf("%i é Igual a %i? %i\n", numero1, numero2, igual);
  printf("%i é Diferente de %i? %i\n", numero1, numero2, diferente);
  printf("%i é Menor que %i? %i\n", numero1, numero2, menor);
  printf("%i é Menor ou Igual a %i? %i\n", numero1, numero2, menor_ou_igual);
  printf("%i é Maior que %i? %i\n", numero1, numero2, maior);
  printf("%i é Maior ou Igual a %i? %i\n", numero1, numero2, maior_ou_igual);
  
  
  return 0;
}

