/*3. Fa�a um programa em C para ler uma matriz 5 x 10 que se refere a respostas de 10 
quest�es de m�ltipla escolha, referentes a 5 alunos. 
Leia tamb�m um vetor de 10 posi��es contendo o gabarito de respostas que podem 
ser a, b, c ou d. Seu programa dever� comparar as respostas de cada aluno com 
o gabarito e armazenar em um outro vetor denominado resultado, contendo a pontua��o 
correspondente a cada aluno.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int leValidaResultado(char resp[5][10], char gab[10], int result[5]);
int main(){
	char respostas[5][10], gabarito[10]={'a','b','c','d'};
	int i, j, result[5]={0,0,0,0,0};
	setlocale(LC_ALL, "");
	
	while(i<5){
		printf("%i� aluno:\n", i+1);
			for(j=0;j<10;j++){
					printf("Resposta da %i� quest�o:\n", j+1);
					fflush(stdin);	
					scanf("%c", &respostas[i][j]);
				}
		i++;
	}
		result[5]=leValidaResultado(respostas, gabarito, result);
			for(i=0;i<5;i++)
			printf("O %i� aluno tem resultado %i\n", i+1, result[i]);
		 	
}
int leValidaResultado(char resp[5][10], char gab[10], int result[5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			if(resp[i][j]==gab[j])
			result[i]++;
			
		}
	}
	return result;
}

