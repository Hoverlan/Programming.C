/*3. Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. 
Utilizando apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço 
das posições contendo valores pares.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int vet[5];
	int ind;
	setlocale(LC_ALL,"");
	for(ind=0; ind<5;ind++){
		printf("Digite o %iº valor:\n",ind+1);
		scanf("%i", (vet+ind));
	}	
		for(ind=0; ind<5;ind++){
			if(*(vet+ind)%2==0){
				printf("%i\n", (vet+ind));	
			}
		}	
}
