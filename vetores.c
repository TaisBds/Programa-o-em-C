#include<stdio.h>

int idade[3],i;

main(void){
	for (i=0;i<3;i++){
	printf("Digitar Idade:");
	scanf("%i",&idade[i]);

	}
	system("cls");
	for (i=0;i<3;i++){
	printf("Idade:%i\n",idade[i]);
	}
	
	
	
}
