/*1. 2. Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o nome, o 
endereço, o preço médio e o tipo de comida. Crie uma lista simples encadeada e escreva um 
programa que utilize uma função para solicitar os dados de um elemento da lista e outra para 
listar todos os dados.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct endereco{
	char rua[25];
	char estado[30];
	char bairro[20];
	char cidade[30];
}Endereco;
typedef struct restaurante{
	char nome[50];
	Endereco end;
	float preco;
	char tpcomida[50];
	
}Restaurante;
typedef struct lista{
	Restaurante inform;
	struct lista *proximo;
}Lista;
Restaurante cadastrar(Lista *l);
Restaurante *inserir(Lista *l, Restaurante r);
void exibirDadosRest(Lista *l);
void consultarRest(Lista *l);

int main(){
	Lista *l;
	l=NULL;
	int op;
	setlocale(LC_ALL,"PORTUGUESE");
	do{
		puts("Escalha uma opção:");
		puts("1-Cadastrar ");
		puts("2-Exibir");
		puts("3-Consultar");
		puts("4-Sair");
		scanf("%i",&op);
		switch(op){
			case 1:
				l=inserir(l, cadastrar(l));
				break;
			case 2:
				exibirDadosRest(l);
				break;
			case 3:
				consultarRest(l);
				break;
			case 4:
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

Restaurante cadastrar(Lista *l){
	Restaurante r;
		
	puts("Digite o nome:");
		fflush(stdin);
		gets(r.nome);
		
	puts("Digite o nome da rua:");
		fflush(stdin);
		gets(r.end.rua);
		
	puts("Digite o nome do estado:");
		fflush(stdin);
		gets(r.end.estado);
		
	puts("Digite o bairro:");
		fflush(stdin);
		gets(r.end.bairro);
		
	puts("Digite a cidade:");
		fflush(stdin);
		gets(r.end.cidade);	
		
	puts("Digite o tipo de comida:");
		fflush(stdin);
		gets(r.tpcomida);
	
	puts("Informe o preço médio:");
		scanf("%f", &r.preco);
		
	return r;
}

Restaurante *inserir(Lista *l, Restaurante r){
	Lista *novo;
	novo=(Lista*)malloc(sizeof(Lista));
	novo->inform=r;
	novo->proximo=l;
	return novo;
}

void exibirDadosRest(Lista *l){
	Lista *p;
	for(p=l;p!=NULL;p=p->proximo){
		printf("Nome: %s\n", p->inform.nome);
		printf("Preço medio: %.2f\n", p->inform.preco);
		printf("Tipo Comida: %s\n", p->inform.tpcomida);
		printf("Endereço:\n");
		printf("Rua: %s\n", p->inform.end.rua);
		printf("Estado: %s\n", p->inform.end.estado);
		printf("Bairro: %s\n", p->inform.end.bairro);
		printf("Cidade: %s\n\n\n", p->inform.end.cidade);
	}
}

void consultarRest(Lista *l){
	Lista *p;
	char nm[25];
	char flag=0;
	
	puts("Digite o nome do restaurante desejado: ");
	fflush(stdin);
	gets(nm);
	for(p=l;p!=NULL;p=p->proximo){
		if(strcmp(nm,p->inform.nome)==0){
			flag=1;
			printf("Nome: %s\n", p->inform.nome);
			printf("Preço medio: %.2f\n", p->inform.preco);
			printf("Tipo Comida: %s\n", p->inform.tpcomida);
			printf("Endereço:\n");
			printf("Rua: %s\n", p->inform.end.rua);
			printf("Estado: %s\n", p->inform.end.estado);
			printf("Bairro: %s\n", p->inform.end.bairro);
			printf("Cidade: %s\n\n\n", p->inform.end.cidade);
		}
	}
		if(flag==0){
			puts("Restaurante não encontrado!");
		}
}




