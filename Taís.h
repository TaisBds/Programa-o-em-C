#include<stdio.h>
#include"Taís.h"
char nome[20];
int tel;

void cadastrar(){
	printf("Nome:");
	fflush(stdin);
	gets(nome);
	
	printf("Telefone:");
	scanf("%d",&tel);
	system("cls");
}
void imprimir(){
	printf("Nome:%s",nome);
	printf("\nTelefone:%i",tel);
}
