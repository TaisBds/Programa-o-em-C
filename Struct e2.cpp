#include <stdio.h>
#include <string.h>

struct Endereco {
    char cidade[50];
    int cep;
};

struct Aluno {
    char nome[50];
    int idade;
    float nota1, nota2;
    struct Endereco endereco;
};

int main() {
    struct Aluno aluno1;

    strcpy(aluno1.nome, "Maria");
    strcpy(aluno1.endereco.cidade, "Teresina");

    aluno1.idade = 20;
    aluno1.nota1 = 8.5;
    aluno1.nota2 = 9.2;
    aluno1.endereco.cep = 72215;

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota1: %.1f\n", aluno1.nota1);
    printf("Nota2: %.1f\n", aluno1.nota2);
    printf("Cep do aluno: %d\n", aluno1.endereco.cep);
    printf("Cidade do aluno: %s\n", aluno1.endereco.cidade);

    return 0;
}
