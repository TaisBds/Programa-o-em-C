#include<stdio.h>

int main(){
	FILE *arq;
	char nome[10], *resultado;
	
	arq= fopen("arquivo","r");
	
	if(arq){
		while (!feof(arq)){
			fgets(nome,10,arq);
			printf("%s",nome);
			
		}
	}else{
		printf("Arquivo não existe");
	}
	fclose(arq);
	return 0;
}
