#include<stdio.h>
#include<locale.h>
int telefone;
float valor;
char letra, nome_carteirinha[20], nome_completo[100];
main(void){
	setlocale(LC_ALL,"");
	printf("Telefone:");
	scanf("%i",&telefone);
	
	printf("Mensalidade:");
	scanf("%f",&valor);
	
	printf("Letra do Aparelho:");
	fflush(stdin);
	scanf("%c",&letra);
	
	printf("Primeiro nome:");
	fflush(stdin);
	fgets(nome_carteirinha,20,stdin);
	
	printf("Nome Completo:");
	fflush(stdin);
	fgets(nome_completo,100,stdin);
	
	system("cls");
	
	printf("Telefone:%i",telefone);
	printf("\nMensalidade:%f",valor);
	printf("\nLetra Aparelho:%c",letra);
	printf("\nPrimeiro nome:%s",nome_carteirinha);
	printf("Nome Completo:%s",nome_completo);
} 
