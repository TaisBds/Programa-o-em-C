#include<stdio.h>
char nomes[3][3][100];
int a, b;
int main(){
	for(a=1; a<4; a++){
		for(b=1; b<4; b++){
			printf("Nome e Sobrenome:");
			fflush(stdin);
			gets(nomes[a][b]);
		}
	}
	system("cls");
	for(a=1; a<4; a++){
		for(b=1; b<4; b++){
			printf("nome:%s\n",nomes[a][b]);
		}
	}
	
}
