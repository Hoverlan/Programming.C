/*9. Faça um algoritmo em C que leia três valores numéricos e encontre qual o menor 
deles, mostrando-o no final.8*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int valor1, valor2, valor3, menorValor;
	
	printf("Informe o primeiro valor:\n");
	scanf("%i",&valor1);
	printf("Informe o segundo valor:\n");
	scanf("%i",&valor2);
	printf("Informe o terceiro valor:\n");
	scanf("%i",&valor3);
		if(valor1<valor2 && valor1<valor3)
			menorValor=valor1;
		else
		if(valor2<valor1 && valor2<valor3)
			menorValor=valor2;
		else
			menorValor=valor3;
	printf("Menor valor = %i\n", menorValor);		
	
	return 0;
}
