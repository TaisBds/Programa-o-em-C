#include<stdio.h>
#include<locale.h>
int  n;
char nome[5][50], local[5][20];
float valor[5];
main(){
setlocale(LC_ALL,"");
	for(n=1;n<5;n++){
	printf("Digitar Ponto turistico escolhido:");
	scanf("%s",&local[n]);

	
	printf("Nome do Cliente: ");
	scanf("%s",&nome[n]);
	
	fflush(stdin);
	
	printf("Valor do Pacote da Viagem:");
	scanf("%f",&valor[n]);
	

	}
	system("cls");
	
 	for(n=1;n<5;n++){
 		printf("Ponto turistico:%s ",local[n]);
 		printf("Cliente:%s",nome[n]);
 		printf("Valor Viagem:%f",valor[n]);
	 }
	
	
	
	
}
