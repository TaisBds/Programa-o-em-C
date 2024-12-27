#include<stdio.h>
char nome[30],nome_cliente[40],nome_produto[70];
int cont;
main(void){

	printf("Digitar nome:");
		fflush(stdin);
		gets(nome);

	for(cont=1;cont<=3;cont++){
		
		sleep(2);
		printf("Nome do cliente:");
		gets(nome_cliente);
		printf("Nome do produto:");
		gets(nome_produto);
		
	}
}
