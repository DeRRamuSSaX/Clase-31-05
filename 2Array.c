//Escribir un programa que haga lo mismo que el ejercicio anterior pero para los primeros n numeros naturales. El usuario ingresa n como argumento de lınea de comandos.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int numeros[n];
  for (int i = 0; i < n; i++) {
    numeros[i] = i;
    printf("%d\n", i);
  }
  return 0;
}
