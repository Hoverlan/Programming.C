/*3. Faça um algoritmo que calcule e escreva o somatório dos valores 
armazenados numa variável composta unidimensional, chamada dados, 
de até 100 elementos numéricos a serem lidos*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 100
int main(){
	float dados[MAX], somaDados=0;
	int i;
	setlocale(LC_ALL,"");
	
		printf("Informe os dados numéricos:\n");
			for(i=0;i<MAX;i++){
			printf("%iº dado:\n", i+1);
			scanf("%f", &dados[i]);
		}
			system("cls");
		for(i=0;i<MAX;i++){
			printf("%iª: %.2f\n ", i+1, dados[i]);
			somaDados+=dados[i];
		}
		printf("O somatório de todos dados: %.2f\n", somaDados);
		
 return 0;
}
