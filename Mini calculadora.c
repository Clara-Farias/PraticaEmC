#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int A, B, Soma;
  printf("Digite um numero inteiro: ");
  scanf("%d", &A);

  printf("Digite um numero inteiro: ");
  scanf("%d", &B);

  Soma = A + B;
  printf("O Valor da soma = %d\n", Soma);

  if(Soma > 10)
  {
    printf("O valor da soma se encontra maior que 10\n");
  }
  else
  {
    printf("Valor menor ou igual a 10\n");
  }

  system("PAUSE");
  return(0);
}
