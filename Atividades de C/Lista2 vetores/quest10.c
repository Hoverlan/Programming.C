/*10. Escrever um algoritmo que solicite e leia letra por letra 
o nome completo de uma pessoa. O caractere sustenido “#” indica 
o fim do nome. Depois de lê-lo apresente todo o nome informado, sem o #.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define MAX 40

int main(){
	int nome[MAX];
	int ind=0, qtde;
	setlocale(LC_ALL, "");
	
		printf("Digite seu nome:\n");
	do{
		nome[ind]=getche();
		ind++;
	}while(ind<MAX && nome[ind-1]!='#');
	
	if(ind<MAX){
		qtde=ind-1;
	}
		printf("\n");
		printf("Nome\n");
		for(ind=0; ind<qtde; ind++){
			printf("%c", nome[ind]);
		}
	return 0;
}
