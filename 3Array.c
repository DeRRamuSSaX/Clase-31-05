//Escribir un programa que acepte dos argumentos n y m. El tamano de un array es el argumento n. El programa llena el array con numeros aleatorios entre 0 y m y los imprime uno por lınea.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int tamaño[n];
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    tamaño[i] = (rand() % m) - 1;
    printf("%d ", tamaño[i]);
  }
  printf("\n");
  return 0;
}
