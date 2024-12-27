#include<stdio.h>
#include<locale.h>
int i;
char nome[5][50], local[5][20];
float valor[5];
main(){
setlocale(LC_ALL,"");
	for(i=1;i<5;i++){
	printf("Digitar Ponto turistico escolhido:");
	fflush(stdin);
	gets(local[i]);

	
	printf("Nome do Cliente: ");
	fflush(stdin);
	gets(nome[i]);
	
	
	
	printf("Valor do Pacote da Viagem:");
	scanf("%f",&valor[i]);
	system("cls");

	}

	
 	for(i=1;i<5;i++){
 		printf("\n\nPonto turistico:%s ",local[i]);
 		printf("\nCliente:%s",nome[i]);
 		printf("\nValor Viagem:%.2f",valor[i]);
	 }
	
	
	
	
}
