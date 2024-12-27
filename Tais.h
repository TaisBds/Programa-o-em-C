char nome[20], endereco[50], cnpj[20];
int telefone;

void cadastrar(){
	printf ("Nome da Empresa: ");
	fflush(stdin);
	gets(nome);
	 
	printf("Digitar Cnpj: ");
	fflush(stdin);
	gets(cnpj);
	
	printf("Digitar Endereco: ");
	fflush(stdin);
	gets(endereco);
	
	printf("Digitar Telefone: ");
	fflush(stdin);
	scanf("%i",&telefone);
	
	system("cls");
	
}
void imprimir(){
	printf("Empresa:%s",nome);
	printf("\nCnpf:%s",cnpj);
	printf("\nEndereço:%s",endereco);
	printf("\nTelefone:%i",telefone);
}
