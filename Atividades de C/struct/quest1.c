/*1. Desenvolva um programa em C utilizando registro que permita a entrada de nome, 
endereço e telefone de 3 pessoas e os imprima ao final.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct pessoa{
	char nome[20];
	char endereco[30];
	int telefone;
};
typedef struct pessoa Cadastro;

void cadastrarDados(struct pessoa vet[3]);// protótipos
void imprimirDados(struct pessoa vet[3]);

int main(int argc, char *argv[]) {
	Cadastro vetor[3]; //declaração vetor
	setlocale(LC_ALL,"");
	
	cadastrarDados(vetor); //chamada funções
	imprimirDados(vetor);
	
	return 0;
}

void cadastrarDados(struct pessoa vet[3]){
	int ind;
	do{
		printf("Dados da %iª pessoa:\n", ind+1);
		puts("Nome:");
		fflush(stdin);
		fgets(vet[ind].nome,20,stdin);
		
		puts("Endereço:");
		fflush(stdin);
		fgets(vet[ind].endereco,30,stdin);
		
		puts("Telefone:");
		scanf("%i", &vet[ind].telefone);
		
		ind++;
	}while(ind<3);
	system("cls");
}
void imprimirDados(struct pessoa vet[3]){
	int ind;
		for(ind=0;ind<3;ind++){
			printf("%iª Pessoa:\n", ind+1);
			printf("Nome: %s\n", vet[ind].nome);
			printf("Endereço:%s\n", vet[ind].endereco);
			printf("Telefone:%i\n\n", vet[ind].telefone);	
		}
}
	

