#include<stdio.h>
char nomes[3][3][100];
int a, b;
int main(){
	for(a=1;a<=3;a++){
		for(b=1;b<=3;b++){
			printf("Nome e Sobrenome:");
			fflush(stdin);
			fgets(nomes[a][b],100,stdin);
		}
	}
	system("cls");
	for(a=1;a<=3;a++){
		for(b=1;b<=3;b++){
			printf("nome:%s\n",nomes[a][b]);
		}
	}
	
}
