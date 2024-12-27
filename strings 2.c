#include<stdio.h>
#include<string.h>
#include<locale.h>

char string1[50];
char string2[50];
int main(){
	setlocale(LC_ALL,"");
	printf("Digitar palavra1:");
	scanf("%[^\n]%*c",string1);
	
	strcpy(string2, string1);
	printf("string1é: %s\n",string1);
	printf("string2é: %s\n",string2);
	
	return 0;
}
