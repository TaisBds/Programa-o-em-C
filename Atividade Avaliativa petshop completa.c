#include"funcoes1.h"
#include<locale.h>

int main() {
    setlocale(LC_ALL,"");

    int maxClientes = 10, maxAgendamentos = 10, maxConsultas = 10;
    int numClientes = 0, numAgendamentos = 0, numConsultas = 0;
    struct Cliente clientes[maxClientes];
    struct Agendamento agendamentos[maxAgendamentos];
    struct Consulta consultas[maxConsultas];

    char senha[10];
    printf("Digite a senha para acessar o sistema:");
    scanf("%s", senha);

    while (strcmp(senha, "patinha") != 0) {
        printf("Senha incorreta! Tente novamente:");
        scanf("%s", senha);
        
    }
    system("cls");  // Limpa a tela após o login

    printf("\nBem-vindo ao Petshop \"Viva Pet\"\n");

    int opcao;
    while (1) {
        printf("\nMenu:\n");
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Agendar Banho ou Tosa\n");
        printf("3 - Agendar Consulta\n");
        printf("4 - Imprimir Relatório Geral\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 1:
                printf("\nBem-vindo ao Petshop \"Viva Pet\"\n");
                cadastrarCliente(clientes, &numClientes, maxClientes);
                break;
            case 2:
                printf("\nBem-vindo ao Petshop \"Viva Pet\"\n");
                agendarBanhoTosa(agendamentos, &numAgendamentos, maxAgendamentos);
                break;
            case 3:
                printf("\nBem-vindo ao Petshop \"Viva Pet\"\n");
                cadastrarConsulta(consultas, &numConsultas, maxConsultas, clientes, numClientes);
                break;
            case 4:
                printf("\nBem-vindo ao Petshop \"Viva Pet\"\n");
                imprimirRelatorioGeral(clientes, numClientes, agendamentos, numAgendamentos, consultas, numConsultas);
                break;
            case 5:
                printf("Volte sempre ao Petshop \"Viva Pet\"\n");
                return 0;
            default:
                printf("Opção incorreta!\n");
        }
    }

    return 0;
}

