#include<stdio.h>

float altura[3],*p_altura[3];
int i;
int main(){
	for(i=1;i<=2;i++){
	printf("Qual a Altura:");
	scanf("%i",&altura[i]);
	 p_altura[i]=&altura[i];
	
	}

	for(i=1;i<=2;i++){
	printf("Altura:%.2f\n",*p_altura[i]);
}
}
