//1. Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 5
int main(){
	float notas[MAX];
	int i;
	setlocale(LC_ALL,"");
	
	for(i=0;i<MAX;i++){
		printf("Digite a %iª nota:\n", i+1);
		scanf("%f", &notas[i]);
	}
		printf("Notas:\n");
		for(i=0;i<MAX;i++){
			printf("%iª: %.2f\n ", i+1, notas[i]);
		}
		

return 0;
}
