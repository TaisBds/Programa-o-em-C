#include<stdio.h>
#include<locale.h>
char nome[3][100], *p_nome[3];
float preco[3], *p_preco[3], soma[3], *p_soma[3], subtotal[3], *p_subtotal[3], total, *p_total;
int i, quant[3], *p_quant[3];
int main(void){
	setlocale(LC_ALL,"");
	
	printf("BLACK FRIDAY");
	
	for(i=0;i<=3;i++){
		printf("Produto:");
		fgets(nome[i],sizeof(nome[i]),stdin);
		
		printf("Preço:");
		scanf("%f",&preco[i]);
		printf("Quantidade:");
		scanf("%f",&quant[i]);
	subtotal[i]= preco[i] * quant[i];
	total = total + subtotal[i];
	
	p_nome[i] = nome[i];
	p_preco[i] =&preco[i];
	p_quant[i] =&quant[i];
	p_subtotal[i] =&subtotal[i];
	p_total =&total;
	
	}
	system("cls");
	for(i=0;i<=3;i++){
	printf("Produto: %s",p_nome[i]);
	printf("Preço: %.2f\n Quantidade: %i \t=%.2f\n",*p_preco[i],*p_quant);
	}
	printf("\n\nTotal:%.2f", *p_total);
	
	



}
