#include<stdio.h>
#include<locale.h>

char nome[30], fone[30], email[40],end[40];

void cadastrar(){
	printf("Digitar Nome: ");
	gets(nome);
	fflush(stdin);
	printf("Digitar Telefone: ");
	gets(fone);
	fflush(stdin);
	printf("Digitar Endereço: ");
	gets(end);
	fflush(stdin);
	printf("Digitar E-mail: ");
	gets(email);
	
	system("cls");
}
void imprimir(){
	printf("Nome Digitado: %s",nome);
	printf("\nTelefone: %s",fone);
	printf("\nEndereço Digitado: %s",end);
	printf("\nE-mail: %s",email);
}
int main(){
	setlocale(LC_ALL,"");
	cadastrar();
	imprimir();
}
