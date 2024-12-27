#include<stdio.h>
#include<string.h>

int idade;
int main(){
	printf("Digite a idade: ");
	scanf("%d%*[^\n]",&idade);
	
	printf("Idade: %d\n",idade);
}
