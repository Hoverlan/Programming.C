/*5. Fa�a um algoritmo que leia um vetor de at� 80 elementos. 
Ap�s a leitura de todos os dados, leia um n�mero e verifique 
se existem elementos no vetor iguais ao n�mero lido. Se 
existirem, escrever, em uma tela limpa, quantas vezes eles 
aparecem e quais as posi��es em que eles est�o armazenados no vetor.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 7
int main(){
	int vetor[MAX], ind, cont=0, numero;
	setlocale(LC_ALL,"");
	
	for(ind=0;ind<MAX;ind++){
		printf("Entre com %i� valor:\n", ind+1);
		scanf("%i",&vetor[ind]);
	}
	printf("Digite um valor para verifica��o:\n");
	scanf("%i", &numero);
	system("cls");
	
	for(ind=0;ind<MAX;ind++){
		if(numero==vetor[ind]){
			cont++;
			printf("O valor foi encontrado na posicao: %i \n",ind+1);
		}else
			if(cont==0){
			puts("Valor n�o encontrado no vetor!");
			exit(1);
		}
	}
		printf("O valor pesquisado foi encontrado %i vezes \n",cont);
	return 0;
}
