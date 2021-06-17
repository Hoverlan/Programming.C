//Obs: não concluido
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct produto{
	int codigo;
	char nome[25];
	float precoCompra;
	float precoVenda;
	int qtde;
	
};
typedef struct produto Produto;
struct lista{
	Produto inform;
	struct lista *proximo;
};
typedef struct lista Lista;

Produto cadastrar();
Lista *inserir(Lista *l, Produto p);
void exibirCadastro(Lista *l);
void editarCadastro(Lista *l);
void removerProduto(Lista *l);
void consultarProduto(Lista *l);

int main(){
	Lista *l;
	l=NULL;
	Lista *p;
	int op;
	char caracter;
	Lista *backup;

	do{
		printf("Escolha uma opção:\n");
		printf("1 - Cadastrar produtos\n"); 
		printf("2 - Exibir cadastro\n");	
		printf("3 - Editar cadastro\n");	
		printf("4 - Pesquisar produto\n");	
		printf("5 - Fazer backup\n");
		printf("6 - Sair\n");
		scanf("%i",&op);
		switch(op){
			case 1:
				l=inserir(l, cadastrar(l));
				break;
			case 2:
				exibirCadastro(l);
				break;
			case 3:
				editarCadastro(l);
				break;
			case 4:
				consultarProduto(l);
				break;
			case 5:
				printf("Deseja fazer backup agora? [S/N]:\n");
					caracter = toupper(getche());
						if(caracter=='S'){
					backup=l;
				}
					puts("Backup realizado com sucesso!");
				break;
			case 6:
				exit(1);
				break;
			default:
				puts("Opção iválida!");
		}
		system("pause");
		system("cls");
	}while(1);
	return 0;
}

Produto cadastrar(Lista *l){
	Produto p;
	
	puts("Digite o codigo do produto:");
		scanf("%i",&p.codigo);
		
	puts("Digite o nome do produto:");
		fflush(stdin);
		gets(p.nome);
		
	puts("Informe o preço de compra:");
		scanf("%f", &p.precoCompra);
		
	puts("Informe o preço de venda:");
		scanf("%f", &p.precoVenda);
		
	puts("Informe a quantidade:");
		scanf("%i", &p.qtde);
		
	return p;
}

void editarCadastro(Lista *l){
	int op;
	char continuar, caracter;
	
	do{
		puts("Escolha uma opção:");
		puts("1-Excluir produto");
		puts("2-Incluir produto");
		scanf("%i",&op);
		switch(op){
			case 1:
				removerProduto(l);
			break;
			
			case 2:
				l->proximo=inserir(l, cadastrar(l));
			break;
					
			default:
				puts("Opção inválida!");
		}
		printf("Pressione 's' para voltar ao menu ou enter para sair:\n");
		continuar = toupper(getch());
		system("cls");
	}while(continuar=='S');
}
Lista *inserir(Lista *l, Produto p){
	Lista *novo;
	novo=(Lista*)malloc(sizeof(Lista));
	novo->inform=p;
	novo->proximo=l;
	return novo;
}
void removerProduto(Lista *l){
	Lista *p;
	char remove[25];
	int flag=0;
	
		printf("Informe o nome do produto para remover:\n");
		fflush(stdin);
		gets(remove);
		for(p=l;p!=NULL;p=p->proximo){
			if(strcmp(remove, p->inform.nome)==0){
			flag=1;
			p->proximo=l;
			free(p);
			break;
			}
			
			if(flag==0){
					puts("Produto não encontrado!");
			}
		}
}

void consultarProduto(Lista *l){
	Lista *p;
	char nm[25];
	char flag=0;
	
	puts("Digite o nome do produto desejado: ");
	fflush(stdin);
	gets(nm);
	for(p=l;p!=NULL;p=p->proximo){
		if(strcmp(nm,p->inform.nome)==0){
	flag=1;
	printf("Nome:%s\n", p->inform.nome);
	printf("Código:%i\n", p->inform.codigo);
	printf("Preço de compra: %.2f\n", p->inform.precoCompra);
	printf("Preço de venda: %.2f\n", p->inform.precoVenda);
	printf("Quantidade:%i\n", p->inform.qtde);
		}
	}
		if(flag==0){
			puts("Produto não encontrado!");
		}
}

void exibirCadastro(Lista *l){
	Lista *p;
	for(p=l;p!=NULL;p=p->proximo){
		printf("Nome:%s\n", p->inform.nome);
		printf("Código:%i\n", p->inform.codigo);
		printf("Preço de compra: %.2f\n", p->inform.precoCompra);
		printf("Preço de venda: %.2f\n", p->inform.precoVenda);
		printf("Quantidade:%i\n", p->inform.qtde);
		printf("\n\n");
	}
}



