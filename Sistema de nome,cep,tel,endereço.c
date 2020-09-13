#include <stdio.h>

int main()
{
char nome[30], cep[100], tel[100], end[200];
printf("digite seu nome: ");
gets(&nome);
printf("digite seu endereco: ");
gets(&end);
printf("digite seu CEP: ");
gets(&cep);
printf("digite seu telefone: ");
gets(&tel);

printf("Nome: %s \n", nome);
printf("Endereco: %s \n", end);
printf("CEP e telefone respectivamente :%s e %s", cep, tel);

//gets para digitar palavras e numeros com espaço sem dar erro na hora de mostrar
}
