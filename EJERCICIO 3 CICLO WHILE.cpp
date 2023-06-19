#include <stdio.h>

int main() {
  int num, suma = 0;
  while (1) {
    printf("Ingresa un numero:");
    scanf("%d", &num);
    if (num < 0) {
    }
    suma += num;
  }
  printf("La suma es: %d\n", suma);
  return 0;
}

