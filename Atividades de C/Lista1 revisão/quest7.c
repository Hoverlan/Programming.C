//7. Leia dois valores numéricos e apresente a diferença do maior valor pelo menor valor
#include<stdio.h>
#include<stdlib.h>
int main(){
	float valor1, valor2; 
	float diferenca;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &valor1);
	printf("Digite o segundo valor:\n");
	scanf("%f", &valor2);
	
	if(valor1>valor2){
		diferenca=valor1-valor2;
		printf("A diferenca = %.2f\n", diferenca);
	}else
		if(valor1<valor2){
			diferenca=valor2-valor1;
			printf("A diferenca = %.2f\n", diferenca*(-1));
		}
	else{
	
			printf("Os valores sao iguais!\n");
		}
	
	system("pause");
	return 0;
}
