/* 2. Criar um registro chamado DadosAluno, que armazene o nome e idade de um aluno.
Na função main: criar uma variável que é uma estrutura DadosAluno; ler o nome e a idade
de um aluno e armazenar na variável criada; exibir na tela o nome do aluno e a idade do
aluno*/
struct aluno{
	char nome[25];
	int idade;
};
typedef struct aluno Aluno;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 5

int main(int argc, char *argv[]) {
	Aluno dadosAluno[MAX];
	int ind=0, ind2;
	
	setlocale(LC_ALL,"");
	
	cadastrarAluno(dadosAluno);
	system("cls");	
	
	for(ind2=0; ind2<MAX;ind2++){
		printf("Dados do %iº aluno:\n", ind2+1);
		printf("Nome:%s\n",dadosAluno[ind2].nome);
		printf("Idade:%i\n",dadosAluno[ind2].idade);
	}
	
	return 0;
}

void cadastrarAluno(struct aluno dados[]){
	int i;
	do{
		printf("Dados do %iº aluno:\n", i+1);
		do{
			printf("Nome:\n");
			fflush(stdin);
			gets(dados[i].nome);
			if(strcmp(dados[i].nome,"")==0){
				puts("Nome obrigatório!");
			}
		}while(strcmp(dados[i],"")==0);
		
		do{
			puts("Idade:");
			scanf("%i", &dados[i].idade);
			if(dados[i].idade<6){
				puts("Idade inválida!");
			}
		}while(dados[i].idade<6);
		i++;
	}while(i<MAX);

}
