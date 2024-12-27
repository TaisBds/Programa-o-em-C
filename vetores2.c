#include<stdio.h>
int telefone[4], i;

main(){
	for(i=0;i<4;i++){
	printf("Digitar Telefone:");
	scanf("%i",& telefone[i]);
	system("cls");
	}
	
	for (i=0;i<4;i++){
	printf("Telefone Digitado:%i\n",telefone[i]);
	}
}
