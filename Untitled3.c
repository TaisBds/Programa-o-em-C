#include<stdio.h>
#include<locale.h>
float valor;
main(void){
	setlocale(LC_ALL,"");
	printf("Informar Pre�o do Produto:");
	scanf("%f",&valor);
	system("cls");
	if(valor >100){
		printf("Compra N�o Aprovada.");
	}else{
		printf("Compra Aprovada.");
	}
	
}
