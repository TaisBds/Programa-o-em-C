#include<stdio.h>
#include<locale.h>
int numero;
float altura;
char nome[100];
main(){
	setlocale(LC_ALL,"");
	printf("Numero da Casa:");
	scanf("%i",&numero);
	
	printf("Digitar altura do Guarda roupa:");
	scanf("%f",&altura);

	
	printf("Dados do Guarda roupa:");
	fflush(stdin);
	gets(nome);
	
	system("cls");
	
	printf("Numero da casa:%i",numero);
	printf("\naltura:%.2
	f",altura);
	printf("\nGuarda roupa:%s",nome);
}
