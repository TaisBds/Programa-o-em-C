#include<stdio.h>

int main(){
	FILE *arq;
	int num, resultado, soma=0;
	
	arq= fopen("arquivo.txt","r");
	
	if(arq){
		while (!feof(arq)){
		fscanf(arq,"%d",&num);
		soma=soma + num;
			}
	
		
	}else{
		printf("Arquivo n�o existe");
	}
	printf("A soma dos numeros �: %d",soma);
	fclose(arq);
	return 0;
}
