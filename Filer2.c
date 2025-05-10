#include<stdio.h>

int main(){
	FILE *arq;
	
	char c;
	
	arq=fopen("arquivo","r");
	if(arq){
		while ((c=getc(arq))!=EOF){ // percorre o arquivo letra por letra até chegar ao final do arquivo
		printf("%c",c); // getc - get caracter e End of File
		
	}
}else{
	printf("Arquivo não existe");
}
fclose(arq);
return 0;
}
