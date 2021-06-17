/*Elabore um algoritmo utilizando, obrigatoriamente, struct, vetor e função, que:
Realize o cadastro 100 produtos, contendo: código, nome, preço de compra, preço de venda, quantidade.
Realize as seguintes ações: incluir, excluir, editar, pesquisar, realizar backup*/
struct produto{
	int codigo;
	char nome[25];
	float precoCompra;
	float precoVenda;
	int qtde;
};
typedef struct produto Produto;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100

int main(int argc, char *argv[]) {
	Produto prod[MAX];
	int i=0, op;
	int codigo2;
	char nomes2[25]; //o backup deve ser implementado em uma estrutura e não na struct
	float precoCompra2;//o backup deve ser feito de uma vez só e não de item por item 
	float precoVenda2;
	int qtde2;
	setlocale(LC_ALL, "Portuguese");
	
	do{
		printf("Escolha uma opção:\n");
		printf("1 - Cadastrar produtos\n");
		printf("2 - Editar cadastro\n");
		printf("3 - 3-Pesquisar produto\n");
		printf("4 - Sair\n");
		scanf("%i", &op);
		switch(op){
			case 1:
				cadastrarProdutos(prod);
				i++;
				break;
			case 2:
				editarCadastro(prod);	
				break;
			case 3:
				pesquisarProduto(prod);
				break;
			case 4:
				exit(1);
				break;
			default:
				puts("Opção inválida.");
		}
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

void cadastrarProdutos(Produto prod[]){
	int ind=0;
	do{
		puts("Digite o código do %iº produto:", ind+1);
		scanf("%i", &prod[ind].codigo);
		
		puts("Digite o nome do produto:");
		fflush(stdin);
		gets(prod[ind].nome);
		
		puts("Digite o preço de compra:");
		scanf("%f", &prod[ind].precoCompra);
		
			puts("Digite o preço de venda:");
		scanf("%f", &prod[ind].precoVenda);
		
		puts("Digite a quantidade:");
		scanf("%i", &prod[ind].qtde);
		
		ind++;
		system("cls");
	}while(ind<MAX);
}

void editarCadastro(Produto prod[]){
	int op, ind, ind2;
	char continuar, caracter;
	
	do{
		puts("Escolha uma opção:");
		puts("1-Excluir dados");
		puts("2-Incluir dados");
		puts("3-fazer backup");
		scanf("%i",&op);
		switch(op){
			case 1:
				removerProduto(Produto prod[]);
			break;
			
			case 2:
					
				do{ 
					puts("Digite o nome do produto:");
					fflush(stdin);
					gets(prod[ind].nome);;
					puts("Digite o código do produto:");
					scanf("%i",&prod[ind].codigo);
					puts("Digite a quantidade do produto:");
					scanf("%i",&prod[ind].qtde);
					printf("Digite o preço de compra:\n");
					scanf("%f",&prod[ind].precoCompra);
					printf("Digite o preço de venda:\n");
					scanf("%f",&prod[ind].precoVenda);
						printf("Pressione 's' para incluir outro produto:\n");
				}while(ind<100 && toupper(getche())=='s');
			break;
			
			case 3:
				printf("Deseja fazer backup agora? [S/N]:\n");
					caracter = toupper(getche());
						if(caracter=='S'){
							for(ind=0;ind<qtd;ind++){
								strcpy(prod[ind2].nomes2, prod[ind].nomes);
								prod[ind2].codigo2=prod[ind].codigo;
								prod[ind2].precoCompra2=prod[ind].precoCompra;
								prod[ind2].precoVenda2=prod[ind].precoVenda;
								prod[ind2].qtde2=prod[ind].qtde;
							}
								puts("Backup realizado!");
						}else{
							exit(1);
						}
			break;
			default:
				puts("Opção inválida!");
		}
		printf("Pressione 's' para voltar ao menu ou enter para sair:\n");
		continuar = toupper(getch());
		system("cls");
	}while(continuar=='S');
}
void pesquisarProduto(Produto prod[]){
	char nm[25];
	ind2=ind;
	int ind, ind2=-1;

		printf("Informe o nome do produto desejado:\n");
		fflush(stdin);
		gets(nm);
		for(ind=0;ind<qtd;ind++){
			if(strcmp(nm, prod[ind]).nomes==0){
				ind2=ind;
			}
		}
			if(ind2>=0){
				printf("Encontrado em estoque.\n"); 
				printf("Valor: %.2f\n", prod[ind2].precoVenda);
				printf("Quantidade: %i\n", prod[ind2].qtde);
			}else{
				puts("Produto não encontrado!");
			}
}
void removerProduto(Produto prod[]){
	char remove[25];
	int ind, ind2;	
	ind2=ind;
		printf("Informe o nome do produto para remover:\n");
		fflush(stdin);
		gets(remove);
		for(ind=0;ind<ind2;ind++){
			if(strcmp(remove, prod[ind].nomes)==0){
				ind2=ind;
			}
		}
			if(ind2>=0){
					strcpy(prod[ind2].nomes,"removido");
					prod[ind2].codigo=0;
					prod[ind2].precoCompra=0;
					prod[ind2].precoVenda=0;
					prod[ind2].qtde=0;
				}else{
					puts("Produto não encontrado!");
				}
}


