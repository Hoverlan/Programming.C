/*4. Desenvolva um programa em C que leia uma matriz 3 x 6 com valores reais.
( a ) Imprima a soma de todos os elementos das colunas ímpares.
( b ) Imprima a média aritmética dos elementos da segunda e quarta colunas.
( c ) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
( d ) Imprima a matriz modificada.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int matriz[3][6];
	int i, j, somaImpar=0, soma=0, cont=0;
	float media=0;
	
	for(i=0;i<3;i++)
		for(j=0;j<6;j++)
		matriz[i][j]=rand()%99;
		
		
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<6;j++)
		printf("%4i", matriz[i][j]);
	}
		printf("\n\n");	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			if(j%2!=0)
			somaImpar+=matriz[i][j];
		}
	}
	printf("A soma dos elementos das colunas impares: %i\n", somaImpar);
		
	for(i=0;i<3;i++){
		for(j=2;j<5;j++){
			if(j%2==0){
				cont++;
				soma+=matriz[i][j];
				media=soma/cont;
			}
			
		}
	}
	printf("A media dos elementos das colunas 2 e 4: %.2f\n",media);
	printf("\n\n");	
	soma=0;
	for(i=0;i<3;i++){
		for(j=1;j<3;j++){
			soma+=matriz[i][1]+matriz[i][2];
			matriz[i][5] = soma;
			soma=0;
		}
	}
	printf("A matriz modificada:\n");
		for (i=0;i<3;i++){
			printf("\n");
			for (j=0;j<6;j++){
				printf("%5i",matriz[i][j]);
			}
		}	
}

	

