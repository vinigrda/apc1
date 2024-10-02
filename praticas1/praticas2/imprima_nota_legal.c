#include <stdio.h>

int main() {
  printf("==============================\n");
  printf("        NOTA LEGAL\n");
  printf("==============================\n");
  printf("%-12s %-5s %-3s %-1s\n","produto", "qtd", "valor", "unit");
    

  return 0;
}

// ==============================
//      N O T A    L E G A L
// ==============================
// Produto         Qtd Valor Unit  
// Camiseta        002      39.99
// Calca           001      89.90
// Meia Social     003      19.99
// ==============================
// Total:                  229.85