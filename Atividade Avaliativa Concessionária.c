#include <stdio.h>
#include <locale.h>

int senha, opcao, opc, quant;
char nome_comp[70], tel[20], end[50];
char car1[15], car2[15], car3[15], pag[20];
char ace[30];

int main() {
    setlocale(LC_ALL, "");

    while (1) {
        printf("Bem Vindo!\nInforme a Senha: ");
        scanf("%i", &senha);

        if (senha == 123) {
            printf("Senha Correta.\n");
            break;
        } else {
            printf("Senha Incorreta, Tente Novamente.\n");
            sleep(1);
            system("cls");
        }
    }
    while (1) {
        
		system("cls");
		
		printf("\nEscolha uma op��o:\n");
        printf("1 - Cadastro do Cliente.\n");
        printf("2 - Compra de Carro.\n");
        printf("3 - Compra de Acess�rio.\n");
        printf("4 - Sair.\n");
        printf("\nOp��o: ");
        scanf("%i", &opcao);
        
		system("cls");
		
			
        switch (opcao) {
            case 1: 
			// Cadastro do Cliente
                printf("...Cadastro...\n");
                printf("Nome Completo do Cliente: ");
                fflush(stdin);  
                gets(nome_comp);

                printf("Telefone: ");
                fflush(stdin);
				gets(tel);

                printf("Endere�o: ");
                fflush(stdin);
				gets(end);
                
                
                system("cls");

                printf("...Dados Cadastrados...\n");
                printf("Nome do Cliente: %s\n", nome_comp);
                printf("Telefone: %s\n", tel);
                printf("Endere�o: %s\n", end);
                sleep(2);
				break;
                
                
            case 2: 
			// Compra de Ve�culo
                printf("...Compra de Ve�culo...\n");
                printf("Escolher Ve�culo:\n");
                printf("1 - Honda HB20.\n");
                printf("2 - Honda City.\n");
                printf("3 - Honda Civic.\n");
                printf("\nOp��o: ");
                scanf("%i", &opc);
            	
					system("cls");
                switch (opc) {
                    case 1:
                        printf("...Honda HB20...\n");
                        printf("Cor do Ve�culo: ");
                        fflush(stdin);  
                        gets(car1);

                        printf("Forma de Pagamento: ");
                        gets(pag);
                        break;
							system("cls");
                    case 2:
      					printf("...Honda City...\n");
                        printf("Cor do Ve�culo: ");
                        fflush(stdin);  
                        gets(car2);

                        printf("Forma de Pagamento: ");
                        gets(pag);
                        break;
						system("cls");
                    case 3:
                        printf("...Honda Civic...\n");
                        printf("Cor do Ve�culo: ");
                        fflush(stdin);  
                        gets(car3);

                        printf("Forma de Pagamento: ");
                        gets(pag);
                        break;
						system("cls");
                    default:
                        printf("Op��o Inv�lida para Carro!\n");
                        break;
                }	system("cls");
                break;

            case 3:
			 // Compra de Acess�rios
                printf("...Acess�rios...\n");
                printf("Nome Acess�rio: ");
                fflush(stdin);  
                gets(ace);

                printf("Quantidade: ");
                scanf("%i", &quant);
                system("cls");
                
                printf("\n...Dados de Acess�rios...\n");
                printf("Acess�rio: %s\n", ace);
                printf("Quantidade: %i\n", quant);
                sleep(3);
				
				break;
            case 4: 
			// Sair
                printf("Programa Finalizado\n");
                return 0;
                 default:
                printf("Op��o inv�lida.\n");
                break;
        }
    }

    return 0;
}
