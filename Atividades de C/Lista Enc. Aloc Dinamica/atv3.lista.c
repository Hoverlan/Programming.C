/*3. Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de 
uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a 
questão 2.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct dieta{
	char tpcomida[25];
	float pesoQtde;
	float QtdeCalorias;
	
}Dieta;

typedef struct lista{
	Dieta inform;
	struct lista *proximo;
}Lista;
Dieta cadastrar(Lista *l);
Dieta *inserir(Lista *l, Dieta d);
void exibirDieta(Lista *l);
void consultarDieta(Lista *l);

int main(){
	Lista *l;
	l=NULL;
	int op;
	setlocale(LC_ALL,"PORTUGUESE");
	do{
		puts("Escalha uma opção:");
		puts("1-Cadastrar tipo de comida:");
		puts("2-Exibir todas");
		puts("3-Consultar uma dieta");
		puts("4-Sair");
		scanf("%i",&op);
		switch(op){
			case 1:
				l=inserir(l, cadastrar(l));
				break;
			case 2:
				exibirDieta(l);
				break;
			case 3:
				consultarDieta(l);
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

Dieta cadastrar(Lista *l){
	Dieta d;
		
	puts("Digite o tipo de comida:");
		fflush(stdin);
		gets(d.tpcomida);
	
	puts("Informe o peso da porção:");
		scanf("%f", &d.pesoQtde);
		
	puts("Informe a quantidade de calorias:");
		scanf("%f", &d.QtdeCalorias);
		
	return d;
}

Dieta *inserir(Lista *l, Dieta d){
	Lista *novo;
	novo=(Lista*)malloc(sizeof(Lista));
	novo->inform=d;
	novo->proximo=l;
	return novo;
}

void exibirDieta(Lista *l){
	Lista *p;
	for(p=l;p!=NULL;p=p->proximo){
		printf("Tipo de comida: %s\n", p->inform.tpcomida);
		printf("Peso da porção: %.2f kg.\n", p->inform.pesoQtde);
		printf("Quantidade de calorias: %.3i kgCal.\n", p->inform.QtdeCalorias);
	}
}

void consultarDieta(Lista *l){
	Lista *p;
	char nm[25];
	char flag=0;
	
	puts("Digite um prato desejado: ");
	fflush(stdin);
	gets(nm);
	for(p=l;p!=NULL;p=p->proximo){
		if(strcmp(nm,p->inform.tpcomida)==0){
			flag=1;
			printf("Tipo de comida: %s\n", p->inform.tpcomida);
			printf("Peso da porção: %.2f\n", p->inform.pesoQtde);
			printf("Quantidade de calorias: %i\n", p->inform.QtdeCalorias);
		}
	}
		if(flag==0){
			puts("Prato não encontrado!");
		}
}




