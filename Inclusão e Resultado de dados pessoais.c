#include <stdio.h>

int main() {

char nome[30], endereco[30], bairro[30];
int cep, telefone;

printf("Digite seu nome: ");
gets(nome);

printf("Digite seu Endereco: ");
gets(endereco);

printf("Digite o Bairro: ");
gets(bairro);

printf("Digite o CEP: ");
scanf("%d", &cep);
printf("Digite seu Telefone: ");
scanf("%d", &telefone);
printf("\nNome: %s \nEndereco: %s \nBairro: %s\nCEP: %d / Telefone: %d\n\n"
,nome, endereco,bairro, cep, telefone);

system("pause");

}
