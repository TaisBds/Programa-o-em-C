#include<stdio.h>
#include<locale.H>


float soma(float nota1, float nota2){
	
return	nota1+nota2;
}
float divisao(float nota1, float nota2){
	return nota1/ nota2;
}
float multiplicacao(float nota1, float nota2){
	return nota1*nota2;
	}
float sublitacao(float nota1, float nota2){
	return nota1 - nota2;
	}
int main(){
	setlocale(LC_ALL,"");

	float nota1, nota2;
	
	printf("Digite nota 01: ");
	scanf("%f",&nota1);
	
	
	printf("Digite nota 02: ");
	scanf("%f",&nota2);
	system("cls");
	
	
	printf("Soma: %2.f \n", soma(nota1,nota2));
	
	printf("Digite nota 01: ");
	scanf("%f",&nota1);
	
	
	printf("Digite nota 02: ");
	scanf("%f",&nota2);
	system("cls");
	
		
	printf("Divisao: %2.f \n", divisao(nota1,nota2));
	
		
	printf("Multiplicacão: %2.f \n", multiplicacao(nota1,nota2));
	
		
	printf("Sublitação: %2.f ", sublitacao(nota1,nota2));
}
