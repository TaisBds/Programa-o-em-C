#include<stdio.h>
#include<locale.h>

struct loja{
	char nome[100];
	float preco;
}cadeira;

int main(){
	setlocale(LC_ALL,"");
	printf("Dig. nome cadeira:");
	fflush(stdin);
	gets(cadeira.nome);
	
	printf("Preço:");
	scanf("%f",&cadeira.preco);
	
	system("cls");
	
	printf("Cadeira:%s",cadeira.nome);
	printf("\nPreço:%.2f",cadeira.preco);
}
