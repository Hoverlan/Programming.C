/*2. Efetue a leitura de um número e apresente o módulo (ou valor absoluto) deste 
número.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1, num2, mod=0;
	
	printf("Digite o primeiro numero:\n");
	scanf("%i", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%i", &num2);
	
	mod=num1%num2;
	printf("Modulo = %i\n", num1);
	
	return 0;
}
