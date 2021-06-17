#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 2
/*4. Defina uma estrutura em C para armazenar dados de um ve�culo (Marca, modelo, cor, 
quantidade de portas, motoriza��o), crie uma fun��o para armazenar os dados de 10 
ve�culos, outra para mostrar os dados armazenados, a fun��o main() deve conter um 
pequeno menu para chamar as fun��es criadas.*/

struct veiculo{
	char marca[15];
	char modelo[10];
	char cor[10];
	int qtdePortas;
	float motor;
};
typedef struct veiculo Veiculo;
void cadastrarVeiculo(struct veiculo dados[]);
void exibirDados(struct veiculo dados[]);
int main(){
	Veiculo dados[2];
	int ind=0, qtde, op;
	setlocale(LC_ALL,"");
	
	do{
		puts("Escolha uma op��o:");
		puts("1 - Cadastrar");
		puts("2 - Exibir dados");
		puts("3 - sair");
		scanf("%i",&op);
		switch(op){
			case 1:
				cadastrarVeiculo(dados);
				break;
			case 2:
				exibirDados(dados);
				break;
			case 3:
				exit(1);
		}
	}while(1);
}
void cadastrarVeiculo(Veiculo dad[]){
	int ind=0;
	do{
		printf("Dados do %i� ve�culo:\n", ind+1);
		printf("Marca do ve�culo:\n");
		fflush(stdin);
		gets(dad[ind].marca);
		
		printf("Modelo do veiculo:\n");
		fflush(stdin);
		gets(dad[ind].modelo);
		
		printf("Cor do veiculo:\n");
		fflush(stdin);
		gets(dad[ind].cor);
		
		printf("N�mero de portas: 2 ou 4 \n");
		scanf("%i",&dad[ind].qtdePortas);
					
		printf("Motoriza��o: \n");
		scanf("%f",&dad[ind].motor);
		ind++;
		system("cls");
	}while(ind<2);
}

void exibirDados(Veiculo dad[]){
	int ind;
	
		puts("DADOS DOS VE�CULOS");
	for(ind=0;ind<2;ind++){
		printf("Marca: %s\n", dad[ind].marca);
		printf("Modelo: %s\n", dad[ind].modelo);
		printf("Cor: %s\n", dad[ind].cor);
		printf("N� de portas: %i\n", dad[ind].qtdePortas);
		printf("Motor: %f\n", dad[ind].motor);
	}
}
