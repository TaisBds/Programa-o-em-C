#include <stdio.h>
#include <string.h>
#include <locale.h>

// Estruturas para Cliente, Agendamento e Consulta
struct Cliente {
    char nome[50];
    char telefone[15];
    char nomePet[50];
};

struct Agendamento {
    char nomePet[50];
    int opcao; // 1-Banho, 2-Tosa, 3-Banho e Tosa
};

struct Consulta {
    char nomeCliente[50];
    char nomePet[50];
    char data[10];  
    int medico; 
};

// Fun��o para cadastrar um cliente
void cadastrarCliente(struct Cliente clientes[], int *numClientes, int maxClientes) {
    if (*numClientes >= maxClientes) {
        printf("N�mero m�ximo de clientes atingido!\n");
        return;
    }

    struct Cliente novoCliente;
    printf("\nNome do cliente:");
    scanf(" %[^\n]s", novoCliente.nome);
    printf("Nome do pet:");
    scanf(" %[^\n]s", novoCliente.nomePet);
    printf("Telefone:");
    scanf(" %[^\n]s", novoCliente.telefone);
    
    clientes[*numClientes] = novoCliente;
    (*numClientes)++; // Aumenta o n�mero de clientes cadastrados
    printf("\nCliente cadastrado com sucesso!\n");
    system("cls");  // Limpa a tela ap�s o cadastro
}

// Fun��o para agendar Banho ou Tosa
void agendarBanhoTosa(struct Agendamento agendamentos[], int *numAgendamentos, int maxAgendamentos) {
    if (*numAgendamentos >= maxAgendamentos) {
        printf("\nN�mero m�ximo de agendamentos atingido!\n");
        return;
    }

    struct Agendamento novoAgendamento;
    printf("\nNome do pet:");
    scanf(" %[^\n]s", novoAgendamento.nomePet);
    printf("Escolha uma op��o:\n1 - Banho\n2 - Tosa\n3 - Banho e Tosa \nOp��o: ");
    scanf("%d", &novoAgendamento.opcao);

    agendamentos[*numAgendamentos] = novoAgendamento;
    (*numAgendamentos)++; // Aumenta o n�mero de agendamentos
    printf("\nAgendamento cadastrado com sucesso!\n");
    system("cls");  // Limpa a tela ap�s o agendamento
}

// Fun��o para cadastrar uma consulta
void cadastrarConsulta(struct Consulta consultas[], int *numConsultas, int maxConsultas, struct Cliente clientes[], int numClientes) {
    if (*numConsultas >= maxConsultas) {
        printf("\nN�mero m�ximo de consultas atingido!\n");
        return;
    }

    struct Consulta novaConsulta;
    int i, clienteEscolhido;
    printf("\nEscolha a data para a consulta:\n1 - 28/11/2024 \n2 - 29/11/2024\nEscolha uma op��o:");
    scanf(" %[^\n]s", novaConsulta.data);
    
    printf("\nEscolha o cliente:\n");
    for (i = 0; i < numClientes; i++) {
        printf("%d - %s\n", i + 1, clientes[i].nome);
    }
    printf("\nEscolha o n�mero do cliente:");
    scanf("%d", &clienteEscolhido);
    strcpy(novaConsulta.nomeCliente, clientes[clienteEscolhido - 1].nome);
    strcpy(novaConsulta.nomePet, clientes[clienteEscolhido - 1].nomePet);

    printf("\nEscolha o m�dico: \n1 - Tais Barbosa. \n2 - Fabiano.\nOp��o: ");
    scanf("%d", &novaConsulta.medico);

    consultas[*numConsultas] = novaConsulta;
    (*numConsultas)++;
    printf("\nConsulta agendada com sucesso!\n");
    system("cls");  // Limpa a tela ap�s o agendamento
}

// Fun��o para imprimir relat�rio geral
void imprimirRelatorioGeral(struct Cliente clientes[], int numClientes, struct Agendamento agendamentos[], int numAgendamentos, struct Consulta consultas[], int numConsultas) {
    if (numClientes == 0 && numAgendamentos == 0 && numConsultas == 0) {
        printf("\nN�o h� dados para imprimir no relat�rio.\n");
        system("cls");  // Limpa a tela ap�s a tentativa de imprimir relat�rio vazio
        return;
    }

    printf("\n--- Relat�rio Geral ---\n");

    int i;
    printf("\nClientes cadastrados:\n");
    for (i = 0; i < numClientes; i++) {
        printf("Nome:%s \nNome do pet:%s  \nTelefone:%s\n", clientes[i].nome, clientes[i].nomePet, clientes[i].telefone);
    }

    printf("\nAgendamentos:\n");
    for (i = 0; i < numAgendamentos; i++) {
        // Substituindo n�meros por texto
        char *opcaoAgendamento;
        if (agendamentos[i].opcao == 1) {
            opcaoAgendamento = "Banho";
        } else if (agendamentos[i].opcao == 2) {
            opcaoAgendamento = "Tosa";
        } else {
            opcaoAgendamento = "Banho e Tosa";
        }
        
        printf("Nome do pet:%s \nOp��o: %s\n", agendamentos[i].nomePet, opcaoAgendamento);
    }

    printf("\nConsultas:\n");
    for (i = 0; i < numConsultas; i++) {
        // Substituindo n�meros por texto para o m�dico
        char *medicoConsulta;
        if (consultas[i].medico == 1) {
            medicoConsulta = "Tais Barbosa";
        } else {
            medicoConsulta = "Fabiano";
        }

        // Substituindo n�meros por texto para a data
        char *dataConsulta;
        if (strcmp(consultas[i].data, "1") == 0) {
            dataConsulta = "28/11/2024";
        } else if (strcmp(consultas[i].data, "2") == 0) {
            dataConsulta = "29/11/2024";
        } else {
            dataConsulta = "Data inv�lida";  // Caso algum valor inesperado seja informado
        }

        printf("Cliente:%s \nPet:%s \nData:%s \nM�dico:%s\n", consultas[i].nomeCliente, consultas[i].nomePet, dataConsulta, medicoConsulta);
    }
    
    system("pause");
    system("cls");
}
