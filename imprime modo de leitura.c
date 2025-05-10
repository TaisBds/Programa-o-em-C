#include<stdio.h>

int main(){
	FILE *arq;
	char nome[10], *resultado;
	
	arq= fopen("arquivo","r");
	
	if(arq){
		while (!feof(arq)){
			resultado=fgets(nome,10,arq);
			printf("RESULTADO: %d\n", resultado);
			
			if(resultado){
					printf("%s",nome);	
			}
	
			
		}
	}else{
		printf("Arquivo não existe");
	}
	fclose(arq);
	return 0;
}
