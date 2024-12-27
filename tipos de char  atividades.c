#include<stdio.h>
#include<string.h>

char nome_comp[20];
char nome[20];

int main(){
	printf("Nome:");
	fflush(stdin);
	gets(nome);
	
	printf("Nome Completo:");
	fflush(stdin);
	gets(nome_comp);
	
	strcpy(nome,nome_comp);
	
	printf("Nome: %s",nome);
	printf("\nNome: %s",nome_comp);
	
	strncpy(nome,nome_comp,5);
	nome[5]='\0';
	
	printf("\nNome 5 digitos: %s",nome);

	
	
	return 0;
}
