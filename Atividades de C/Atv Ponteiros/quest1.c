/*1. Fa�a um programa em C que armazene em um vetor 3 valores, e imprima os valores 
utilizando nota��o de ponteiro.*/
#include<stdio.h>
#include<locale.h>
int main(){
	int vetor[3];
	int ind;
	setlocale(LC_ALL,"");
	
	for(ind=0;ind<3;ind++){
		printf("Digite o %i� valor:\n", ind+1);
		scanf("%i",vetor+ind);
	}
		for(ind=0;ind<3;ind++){
			printf("\t%i� valor: %i - Endere�o: %x\n ",ind+1, *(vetor+ind), vetor+ind);
			printf("\t%i� valor: %i - Endere�o: %d\n ",ind+1, *(vetor+ind), vetor+ind);
		}
}
