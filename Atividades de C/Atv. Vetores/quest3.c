/*3. Fa�a um algoritmo que calcule e escreva o somat�rio dos valores 
armazenados numa vari�vel composta unidimensional, chamada dados, 
de at� 100 elementos num�ricos a serem lidos*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 100
int main(){
	float dados[MAX], somaDados=0;
	int i;
	setlocale(LC_ALL,"");
	
		printf("Informe os dados num�ricos:\n");
			for(i=0;i<MAX;i++){
			printf("%i� dado:\n", i+1);
			scanf("%f", &dados[i]);
		}
			system("cls");
		for(i=0;i<MAX;i++){
			printf("%i�: %.2f\n ", i+1, dados[i]);
			somaDados+=dados[i];
		}
		printf("O somat�rio de todos dados: %.2f\n", somaDados);
		
 return 0;
}
