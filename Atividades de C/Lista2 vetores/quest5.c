/*5. Faça um algoritmo que leia um vetor de até 80 elementos. 
Após a leitura de todos os dados, leia um número e verifique 
se existem elementos no vetor iguais ao número lido. Se 
existirem, escrever, em uma tela limpa, quantas vezes eles 
aparecem e quais as posições em que eles estão armazenados no vetor.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 7
int main(){
	int vetor[MAX], ind, cont=0, numero;
	setlocale(LC_ALL,"");
	
	for(ind=0;ind<MAX;ind++){
		printf("Entre com %iº valor:\n", ind+1);
		scanf("%i",&vetor[ind]);
	}
	printf("Digite um valor para verificação:\n");
	scanf("%i", &numero);
	system("cls");
	
	for(ind=0;ind<MAX;ind++){
		if(numero==vetor[ind]){
			cont++;
			printf("O valor foi encontrado na posicao: %i \n",ind+1);
		}else
			if(cont==0){
			puts("Valor não encontrado no vetor!");
			exit(1);
		}
	}
		printf("O valor pesquisado foi encontrado %i vezes \n",cont);
	return 0;
}
