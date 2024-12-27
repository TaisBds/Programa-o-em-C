#include<stdio.h>
#include<locale.h>
char nome[50],end[40],tel[10],cpf[10],email[30];
char prod[3][30];
float vl[3], total[3];
int i;
void cadastrar_cliente(){
	printf("Nome do Cliente: ");
	gets(nome);
	fflush(stdin);
	printf("Endereço: ");
	gets(end);
	fflush(stdin);
	printf("Telefone: ");
	gets(tel);
	fflush(stdin);
	printf("Cpf: ");
	gets(cpf);
	fflush(stdin);
	printf("Email");
	gets(email);
	system("cls");
}
void cadastar_produto(){
	for(i=0;i<3;i++){
		printf("Produto: ");
		gets(prod);
		fflush(stdin);
		printf("Valor do Produto: ");
		scanf("%f",&vl);
		system("cls");
		
	}
	
}
void calculo(){
	for(i=0;i<3;i++){
		total=total+vl[i];
	}	
}

void imprimir(){
	for(i=0;i<3;i++){
	printf("Nome do Cliente: %s",nome);
	printf("Telefone: %s",tel);
	printf("Endereço: %s",end);
	printf("Cpf: %s",cpf);
	printf("Email: %s",email);
	printf("Produto: %s",prod[i]);
	printf("Valor: %.2f",vl[i]);
	printf("Calculo: %.2f",total[i]);
	}

}

main(){
	setlocale(LC_ALL,"");
	cadastrar_cliente();
	cadastar_produto();
	calculo();
	imprimir();	
	}

