#include<stdio.h>
#include<locale.h>
float valor;
main(void){
	setlocale(LC_ALL,"");
	printf("Informar Preço do Produto:");
	scanf("%f",&valor);
	system("cls");
	if(valor >100){
		printf("Compra Não Aprovada.");
	}else{
		printf("Compra Aprovada.");
	}
	
}
