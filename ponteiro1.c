#include<stdio.h>

int sapato[3],*p_sapato[3];
int i;
int main(){
	for(i=1;i<=3;i++){
	printf("Numero do sapato:");
	scanf("%i",&sapato[i]);
	p_sapato[i]=&sapato[i];
	}
	for(i=1;i<=3;i++){
	printf("Sapato:%i\n",*p_sapato[i]);
}
}
