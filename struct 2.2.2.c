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
	
	printf("Pre�o:");
	scanf("%f",&cadeira.preco);
	
	system("cls");
	
	printf("Cadeira:%s",cadeira.nome);
	printf("\nPre�o:%.2f",cadeira.preco);
}
