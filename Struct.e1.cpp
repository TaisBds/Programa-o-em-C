#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 struct Pessoa{
        int idade;
        char nome[50];
        float altura;
    };
int main(){
   
	struct Pessoa pessoa1;
    //pedido de dados:
    
  printf("Digite a idade de pessoa: ");
  scanf("%d",&pessoa1.idade);
  fflush(stdin);

   printf("Digite o nome de pessoa: ");
   scanf("%s",&pessoa1.nome);
   fflush(stdin);
  
   printf("Digite a altura de pessoa: ");
   scanf("%f",&pessoa1.altura);
   fflush(stdin);

    system("cls");

   printf("A idade de pessoa: %d ", pessoa1.idade);
   printf("O nome de pessoa: %s", pessoa1.nome);
   printf("A altura de pessoa: %.2f", pessoa1.altura);
}

