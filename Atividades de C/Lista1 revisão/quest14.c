/*14. Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a 
sua vida, ent�o fa�a um algoritmo que leia o nome, o ano de nascimento de uma 
pessoa e o ano atual, depois calcule e escreva o nome e o n�mero de dias, 
aproximados, j� vividos por essa pessoa*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	char nome[15];
	int anoNasc, anoAtual, numDias=0;
	char letra;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite seu nome:\n");
		fflush(stdin);
		gets(nome);
		
		printf("Digite o ano de nascimento:\n");
		scanf("%i",&anoNasc);
		
		printf("Digite o ano atual:\n");
		scanf("%i",&anoAtual);
		
		numDias=(anoAtual-anoNasc)*365;
		printf(" %s viveu cerca de %i dias.", nome, numDias);
				
			printf("\n");
		printf("Clicle 'S' para calculo ou enter para sair:\n\n");
		letra=toupper(getch());
	}while(letra=='S');
	
	return 0;
}
