#include<stdio.h>
#include<locale.h>
float nota1, nota2;
main(void){
	setlocale(LC_ALL,"");
	printf("Digite Note 01:");
	scanf("%f",&nota1);
	printf("Digite Nota 02:");
	scanf("%f",&nota2);
	system("cls");
	if (nota1>nota2){
		printf("Nota 1 Maior;");
	}else{
		printf("Nota 2 Maior");
	}

	
	}
	
	

