/*1. Escreva um programa em C que leia uma matriz 5 x 5 e um valor X. O programa deverá 
fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) 
ou uma mensagem de “não encontrado”.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int matriz[5][5];
	int l, c, x, ind=0;
	setlocale(LC_ALL, "");
		
	for(l=0;l<5;l++){
		for(c=0;c<5;c++)
			matriz[l][c]=l+c;
	}
	
		for(l=0;l<5;l++){
			printf("\n");
			for(c=0;c<5;c++){
			printf("%3i", matriz[l][c]);	
			}
		}
		printf("\n");
		
		
	do{
		printf("Digite um valor x:\n");
		scanf("%i", &x);
		for(l=0;l<5;l++)
			for(c=0;c<5;c++){
				if(x==matriz[l][c])
					printf("Valor x encontrado na linha [%i] e coluna [%i]\n", l+1, c+1);
				else 
					ind++;
					if(ind==25)
					printf("O valor x não foi encontrado na matriz!\n");
		}
										
		puts("Clique em 's' para outro valor:\n");
	}while(getche()=='s');
		
}

