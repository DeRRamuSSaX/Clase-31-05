//Escribir un programa que declare un array de tipo int que almacene los primeros diez numeros naturales.
//Imprimir el array un elemento por lınea.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int numeros[10];
  for (int i = 0; i < 10; i++) {
    numeros[i] = i;
    printf("%d\n", i);
  }
  return 0;
}
