#include<stdio.h>

struct sala{
	char nome[50];
	int matricula;
};
int main(){

	struct sala estudante1;
	struct sala estudante2;
	
	printf("Dig. nome estudante:");
	fflush(stdin);
	gets(estudante1.nome);
	
	printf("Dig. matricula:");
	scanf("%i",&estudante1.matricula);
	
	
		
	printf("Dig. nome estudante:");
	fflush(stdin);
	gets(estudante2.nome);
	
	printf("Dig. matricula:");
	scanf("%i",&estudante2.matricula);
	
	system("cls");
	
	printf("Nome:%s",estudante1.nome);
	printf("\nMatricula:%i",estudante1.matricula);
		
	
	printf("Nome:%s",estudante2.nome);
	printf("\nMatricula:%i",estudante2.matricula);
}




