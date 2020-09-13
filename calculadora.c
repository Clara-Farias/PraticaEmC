#include <stdio.h>
#include <stdlib.h>
int main()
{
int A, B, Soma, Sub, Div, Multi;
printf("Digite um numero inteiro: ");
scanf("%d", &A);

printf("Digite um numero inteiro: ");
scanf("%d", &B);

Soma = A + B;
printf("O Valor da soma = %d\n", Soma);

Sub = A - B;
printf("O valor da subtracao = %d\n",Sub);

Div = A / B;
printf("O valor da divisao = %d\n",Div);

Multi = A * B;
printf("O valor da multi = %d\n",Multi);


  system("pause");
  return(0);
}

