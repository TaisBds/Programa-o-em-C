#include<stdio.h>
int idade[2][2];                                                                                                                                          ;
int linha, coluna;
int main(){
	for(linha=0;linha<=1;linha++){
	for(coluna=0;coluna<=1;coluna++){
	printf("Dig. idade:");
	scanf("%i",&idade[linha][coluna]);	
	}	
	}
	for(linha=0;linha<=1;linha++){
	for(coluna=0;coluna<=1;coluna++){
		printf("%i".idade[linha][coluna]);
	}
	printf("\n");
	}
	
	
}
