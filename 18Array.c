//Escribir un programa que traduzca una palabra ingresada como argumento a codigo Morse, separando cada letra con un espacio. El programa recibe su argumento en letras minısculas unicamente.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char *morse[] = {
    ".-",
    "-..."
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "...."
  };
  int i = 0;
  while (argv[1][i] != 0) {
    printf("%s ", morse[argv[1][i] - 'a']);
    i++;
  } printf("\n");
  for (int j = 0; j < i; j++) {
    printf("%c ", argv[1][j]);
  }
  printf("\n");
  return 0;
}
