/*2. Crie um programa em C para gerar uma matriz 4 x 4 com valores no intervalo [1 a 20]. 
Depois transforme a matriz gerada em uma matriz triangular inferior, ou seja, atribuindo 
zero a todos os elementos acima da diagonal principal, por fim imprima a matriz original e 
a matriz transformada.8*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int matriz[4][4], i, j;
	setlocale(LC_ALL, "");
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			matriz[i][j]=rand()%20;
			
	printf("Matriz primária:\n");
	for(i=0;i<4;i++){
		printf("\n");
			for(j=0;j<4;j++)
				printf("%4i",matriz[i][j]);
	}
	printf("\n\n");
		printf("Matriz inferior:\n");
	for(i=0;i<4;i++){
		printf("\n");
			for(j=0;j<4;j++){
				if(i<j)
				matriz[i][j]=0;
				printf("%4i",matriz[i][j]);
			}
	}
	
	
}

