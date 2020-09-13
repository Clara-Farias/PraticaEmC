#include <stdio.h>

int main()
{
     float a,b;
     char op;

     printf("digite o 1 valor: ");
     scanf("%f",&a);
     fflush(stdin);
     printf("digite o 2 valor: ");
     scanf("%f",&b);
     fflush(stdin);

     printf("escolha a operacao: ");
     scanf("%c",&op);
     fflush(stdin);

     switch(op);
     {
          case '+':
              printf("resutaldo= %f ",a+);
              getchar();
              return(0);
          case '-':
               printf("resutaldo= %f ",a-);
               getchar();
               return(0);
          case '*':
               printf("resutaldo= %f ",a*);
               getchar();
               return(0);
          case '/':
              printf("resutaldo= %f ",a/b);
              getchar();
              return(0);
          default:
              printf("não existe essa operacao");
              getchar();
              return(0);

}
