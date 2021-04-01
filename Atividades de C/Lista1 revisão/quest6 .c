//6. Escreva um algoritmo que determine se um número inteiro qualquer é PAR ou ÍMPAR.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int num;
	char letra;
	do{
		printf("Digite um numero inteiro:\n");
		fflush(stdin);
		scanf("%i",&num);
		
		if(num%2==0)
			printf("Numero par!\n");
		else
			printf("Numero impar!\n");
		
		printf("Digite 'C' continuar ou enter para sair:\n");
		letra=toupper(getch());
	}while(letra=='C');
		system("pause");
	return 0;
}

