#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  char p[90] = "Carro";
  char lata[20];
int main() {
  strcpy(lata, p);
  printf("%s\n", lata);
  
  
  
  return 0;
}