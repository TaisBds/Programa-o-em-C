#include <stdio.h>
#include <locale.h>
main(void){
setlocale(LC_ALL,"");
char nome[3][50];
char matricula[3][15];
float nota1[3], nota2[3], nota3[3], nota4[3], media[3];
int i;
for (i=0; i<=2; i++){
printf("Insira o nome do(a) aluno(a): ");
fflush(stdin);
fgets(nome[i], 50, stdin);

printf("Insira a matricula: ");
fflush(stdin);
fgets(matricula[i], 15, stdin);

printf("Insira a Nota1: ");
fflush(stdin);
scanf("%f", &nota1[i]);

printf("Insira a Nota2: ");
fflush(stdin);
scanf("%f", &nota2[i]);

printf("Insira a Nota3: ");
fflush(stdin);
scanf("%f", &nota3[i]);

printf("Insira a Nota4: ");
fflush(stdin);
scanf("%f", &nota4[i]);

media[i]=(nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4;


}
system("cls");

for (i=0; i<=2; i++){
printf("ESTUDANTE: %s", nome[i]);
printf("MATR.: %s", matricula[i]);
printf("1º Nota = %.1f\n", nota1[i]);
printf("2º Nota = %.1f\n", nota2[i]);
printf("3º Nota = %.1f\n", nota3[i]);
printf("4º Nota = %.1f\n", nota4[i]);
printf(">> A MÉDIA foi = %.2f <<\n", media[i]);

if (media[i]>=7){
printf("Aprovado(a)\n");
}
else{
printf("Reprovado(a)\n");
}
printf("==============================");
system("pause");
return 0;
}
}

