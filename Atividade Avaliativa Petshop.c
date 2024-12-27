#include <stdio.h>
#include <string.h>

// Estruturas para armazenar os dados
struct Cliente {
    char nome_cliente[50];
    char nome_pet[50];
    char telefone[15];
};

struct Agendamento {
    char nome_pet[50];
    int tipo_servico; // 1 - Banho, 2 - Tosa, 3 - Banho e Tosa
};

struct Consulta {
    char data[20];
    char cliente[50];
    int profissional; // 1 - Seu nome, 2 - Nome do professor
};

// Funções para exibir o nome do Petshop e o menu
void exibir_nome_petshop() {
    printf("Vivs Pet\n");
}

// Função para cadastrar um cliente
void cadastrar_cliente(struct Cliente clientes[], int *cliente_count) {
    if (*cliente_count >= 10) {  // Limite de 10 clientes
        printf("Número máximo de clientes atingido!\n");
        return;
    }

    printf("\nCadastrar Cliente:\n");
    printf("Nome do cliente: ");
    scanf(" %[^\n]%*c", clientes[*cliente_count].nome_cliente);
    printf("Nome do pet: ");
    scanf(" %[^\n]%*c", clientes[*cliente_count].nome_pet);
    printf("Telefone: ");
    scanf(" %[^\n]%*c", clientes[*cliente_count].telefone);

    (*cliente_count)++;
    printf("Cliente cadastrado com sucesso!\n");
}

// Função para agendar Banho ou Tosa
void agendar_banho_tosa(struct Agendamento agendamentos[], int *agendamento_count) {
    if (*agendamento_count >= 10) {  // Limite de 10 agendamentos
        printf("Número máximo de agendamentos atingido!\n");
        return;
    }

    printf("\nAgendar Banho/Tosa:\n");
    printf("Nome do pet: ");
    scanf(" %[^\n]%*c", agendamentos[*agendamento_count].nome_pet);
    printf("Escolha uma opção: 1 - Banho / 2 - Tosa / 3 - Banho e Tosa: ");
    scanf("%d", &agendamentos[*agendamento_count].tipo_servico);

    (*agendamento_count)++;
    printf("Agendamento realizado com sucesso!\n");
}

// Função para agendar Consulta
void agendar_consulta(struct Consulta consultas[], int *consulta_count, struct Cliente clientes[], int cliente_count) {
    if (*consulta_count >= 10) {  // Limite de 10 consultas
        printf("Número máximo de consultas atingido!\n");
        return;
    }

    printf("\nAgendar Consulta:\n");
    printf("Escolha a data (1 ou 2): ");
    scanf(" %[^\n]%*c", consultas[*consulta_count].data);
    printf("Escolha o cliente:\n");
    
	for (int i = 0; i < cliente_count; i++) {
        printf("%d - %s\n", i + 1, clientes[i].nome_cliente);
    }
    int cliente_index;
    scanf("%d", &cliente_index);
    strcpy(consultas[*consulta_count].cliente, clientes[cliente_index - 1].nome_cliente);

    printf("Escolha o profissional (1 - Seu nome / 2 - Nome do professor): ");
    scanf("%d", &consultas[*consulta_count].profissional);

    (*consulta_count)++;
    printf("Consulta agendada com sucesso!\n");
}

// Função para imprimir o relatório geral
void imprimir_relatorio(struct Cliente clientes[], int cliente_count, struct Agendamento agendamentos[], int agendamento_count, struct Consulta consultas[], int consulta_count) {
    printf("\nRelatório Geral:\n");

    // Relatório de Clientes
    printf("\nClientes cadastrados:\n");
    for (int i = 0; i < cliente_count; i++) {
        printf("Cliente: %s, Pet: %s, Telefone: %s\n", clientes[i].nome_cliente, clientes[i].nome_pet, clientes[i].telefone);
    }

    // Relatório de Agendamentos
    printf("\nAgendamentos:\n");
    for (int i = 0; i < agendamento_count; i++) {
        printf("Pet: %s, Serviço: ", agendamentos[i].nome_pet);
        switch (agendamentos[i].tipo_servico) {
            case 1: printf("Banho\n"); break;
            case 2: printf("Tosa\n"); break;
            case 3: printf("Banho e Tosa\n"); break;
        }
    }

    // Relatório de Consultas
    printf("\nConsultas:\n");
    for (int i = 0; i < consulta_count; i++) {
        printf("Data: %s, Cliente: %s, Profissional: %d\n", consultas[i].data, consultas[i].cliente, consultas[i].profissional);
    }
}

int main() {
    char senha[20];
    int opcao;
    int cliente_count = 0, agendamento_count = 0, consulta_count = 0;

    // Arrays fixos para armazenar os dados
    struct Cliente clientes[10];  // Limite de 10 clientes
    struct Agendamento agendamentos[10];  // Limite de 10 agendamentos
    struct Consulta consultas[10];  // Limite de 10 consultas

    // Login
    do {
        printf("Digite a senha: ");
        scanf("%s", senha);
    } while (strcmp(senha, "patinha") != 0);
    
    // Após login
    exibir_nome_petshop();

    do {
        // Exibir menu
        printf("\nMenu:\n");
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Agendar Banho ou Tosa\n");
        printf("3 - Consulta\n");
        printf("4 - Imprimir Relatório Geral\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_cliente(clientes, &cliente_count);
                break;
            case 2:
                agendar_banho_tosa(agendamentos, &agendamento_count);
                break;
            case 3:
                agendar_consulta(consultas, &consulta_count, clientes, cliente_count);
                break;
            case 4:
                imprimir_relatorio(clientes, cliente_count, agendamentos, agendamento_count, consultas, consulta_count);
                break;
            case 5:
                printf("Volte sempre ao Viva Pet\n");
                break;
            default:
                printf("Opção incorreta\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}

