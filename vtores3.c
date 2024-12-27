#include<stdio.h>
float n1[3], n2[3], media[3];
int i;
main(){
	for(i=0;i<3;i++){
		
	printf("%i Estudante",i+1);
		
	printf("Digite N1:");
	scanf("%f",&n1[i]);
	
	
	printf("Digite N2:");
	scanf("%f",&n2[i]);
	
	system("cls");
	media[i]=(n1[i]+n2[i])/2;
	
	}
	for(i=0;i<3;i++){
		
		printf("%i Estudante",i);
		printf("Nota 1:%.2f\n",n1[i]);
		printf("Nota 2:%.2f\n",n2[i]);
		printf("Media:%.2f\n",media[i]);
	}
 
}

