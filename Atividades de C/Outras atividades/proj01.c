/*Elabore um algoritmo utilizando, obrigatoriamente, vetor e função, que:
Realize o cadastro 100 produtos, contendo: código, nome, preço de compra, preço de venda, quantidade.
Realize as seguintes ações: incluir, excluir, editar, pesquisar, realizar backup*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 5
void levalidaNome(char nome[]);
int levalidaCodigo();
int levalidaQtde();
float precoCompra();
float precoVenda();
void editarCadastro();
void pesquisarProduto(char nomes[][25], float valorVenda[], int qtde[], int qtd);
void removerProduto(char nomes[][25], int cod[], float vlCompra[], float vlVenda[], int qtdeProd[], int qtd);

void main(){
	char nomes[MAX][25];
	int codigos[MAX], ind=0, qtdeProd[MAX],  qtd, op;
	float valorCompra[MAX],  valorVenda[MAX];
	char texto, nome, continuar;
	setlocale(LC_ALL,"");
	char nomes2[MAX][25];
	int codigos2[MAX], qtdeProd2[MAX];
	float valorCompra2[MAX], valorVenda2[MAX];
	
	do{
		puts("Escolha uma opção:");
		puts("1-Cadastrar");
		puts("2-Editar");
		puts("3-Pesquisar");
		puts("4-ver estoque");
		scanf("%i",&op);
		switch(op){
			case 1:
				levalidaNome(nomes[ind]);
				codigos[ind]=levalidaCodigo();
				qtdeProd[ind]=levalidaQtde();
				valorCompra[ind]=precoCompra();
				valorVenda[ind]=precoVenda();
				ind++;
			break;
			
			case 2:
				editarCadastro(nomes, valorVenda, valorCompra, qtdeProd, nomes2, codigos2, qtdeProd2, valorCompra2, valorVenda2, ind);	
			break;
			
			case 3:
				pesquisarProduto(nomes, valorVenda, qtdeProd, ind);
				
			break;
			
			case 4:
				printf("Mercadorias:\n");
				for(ind=0;ind<MAX;ind++){
					printf("Codigo: %i\n",  codigos[ind]);
					printf("Nome: %s \n", nomes[ind]);
					printf("Valor: %.2f\n", valorVenda[ind]);
					printf("Quantidade: %i\n", qtdeProd[ind]);
				}
			break;
			default:
				puts("Opção inválida!");
		}
		qtd=ind;
		printf("Pressione 's' para novo produto ou voltar ao menu:\n");
		continuar = toupper(getch());
		system("cls");
	}while(continuar=='S' && ind<MAX);
}

void levalidaNome(char nome[]){
	do{
		puts("Digite o nome do produto:");
		fflush(stdin);
		gets(nome);
		if(strcmp(nome,"")==0){
			puts("Nome obrigatório!");
		}
	}while(strcmp(nome,"")==0);
}

int levalidaCodigo(){
	int cod;
	do{
		puts("Digite o código do produto:");
		scanf("%i",&cod);
		if(cod<0 && cod>100){
			puts("Código inválido!");
		}
	}while(cod<0 && cod>100);
	return cod;
}

int levalidaQtde(){
	int qtd;
	do{
		puts("Digite a quantidade do produto:");
		scanf("%i",&qtd);
		if(qtd<=0 || qtd>100){
			puts("Quantidade inválida!");
		}
	}while(qtd<=0 || qtd>100);
	return qtd;
}


float precoCompra(){
	float preco;
	do{
		printf("Digite o preço de compra:\n");
		scanf("%f",&preco);
		if(preco<0)
		puts("Preço iválido!");
	}while(preco<0);
	return preco;
}

float precoVenda(){
	float preco;
	do{
		printf("Digite o preço de venda:\n");
		scanf("%f",&preco);
		if(preco<0)
		puts("Preço iválido!");
	}while(preco<0);
	return preco;
}

void editarCadastro(char nomes[][25], int cod[], float vlCompra[], float vlVenda[], int qtdeProd[], int qtd, char nomes2[][25], int cod2[], float vlCompra2[], float vlVenda2[], int qtdeProd2[]){
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
				removerProduto(nomes,cod, vlCompra, vlVenda, qtdeProd,qtd);
			break;
			
			case 2:
					
				do{ 
					puts("Digite o nome do produto:");
					fflush(stdin);
					scanf("%s", nomes[ind]);
					puts("Digite o código do produto:");
					scanf("%i",&cod[ind]);
					puts("Digite a quantidade do produto:");
					scanf("%i",&qtdeProd[ind]);
					printf("Digite o preço de compra:\n");
					scanf("%f",&vlCompra[ind]);
					printf("Digite o preço de venda:\n");
					scanf("%f",&vlVenda[ind]);
						printf("Pressione 's' para incluir outro produto:\n");
				}while(ind<100 && toupper(getche())=='s');
			break;
			
			case 3:
				printf("Deseja fazer backup agora? [S/N]:\n");
					caracter = toupper(getche());
						if(caracter=='S'){
							for(ind=0;ind<qtd;ind++){
								strcpy(nomes2[ind2], nomes[ind]);
								cod2[ind2]=cod[ind];
								vlCompra2[ind2]=vlCompra[ind];
								vlVenda2[ind2]=vlVenda[ind];
								qtdeProd2[ind2]=qtdeProd[ind];
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

void pesquisarProduto(char nomes[][25], float valorVenda[], int qtdeProd[], int qtd){
	char nm[25];
	int ind, ind2=-1;
	//qtd=ind;

		printf("Informe o nome do produto desejado:\n");
		fflush(stdin);
		gets(nm);
		for(ind=0;ind<qtd;ind++){
			if(strcmp(nm, nomes[ind])==0){
				ind2=ind;
			}
		}
			if(ind2>=0){
				printf("Encontrado em estoque.\n"); 
				//printf("%s", nomes[ind2]);
				printf("Valor: %.2f\n", valorVenda[ind2]);
				printf("Quantidade: %i\n", qtdeProd[ind2]);
			}else{
				puts("Produto não encontrado!");
			}
}

void removerProduto(char nomes[][25], int cod[], float vlCompra[], float vlVenda[], int qtdeProd[], int qtd){
	char remove[25];
	int ind, ind2;		 
	
		printf("Informe o nome do produto para remover:\n");
		fflush(stdin);
		gets(remove);
		for(ind=0;ind<qtd;ind++){
			if(strcmp(remove, nomes[ind])==0){
				ind2=ind;
			}
		}
				if(ind2>=0){
					strcpy(nomes[ind2],"removido");
					cod[ind2]=0;
					vlCompra[ind2]=0;
					vlVenda[ind2]=0;
					qtdeProd[ind2]=0;
				}else{
					puts("Produto não encontrado!");
				}
}







