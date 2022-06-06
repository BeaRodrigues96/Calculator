#include <stdio.h>

int main()
{

  int A, B, soma, subtr, mult, divis, resto;

  printf("Digite o primeiro valor:\n");

  scanf("%d", &A);

  printf("Digite o segundo valor:\n");

  scanf("%d", &B);

  soma = A + B;

  subtr = A - B;

  mult = A * B;

  divis = A / B;

  resto = A % B;

  printf("Resultados:\n");

  printf("soma: %d\n", soma);

  printf("subtr: %d\n", subtr);

  printf("mult: %d\n", mult);

  printf("divis: %d\n", divis);

  printf("resto: %d\n", resto);
}