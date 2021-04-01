/*12. Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de 
acesso à Internet. Para isso, você deverá ler a quantidade de horas que você utilizou 
do serviço e fazer o cálculo sabendo que você pagará R$ 30,00 por até 20 horas de 
uso (valor básico). Caso você tenha usado mais de 20 horas de Internet, você deverá 
acrescentar 10% do valor básico para cada hora extra utilizada.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int qtdeHoras;
	float valorTotal, valorBasico=30.00;
	char letra;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite a quatidade de horas utilizadas:\n");
		scanf("%i", &qtdeHoras);
	
			if(qtdeHoras<=20){
				printf("O valor a ser pago = R$:%.2f\n", valorBasico);
			}else
				if(qtdeHoras>20){
					qtdeHoras=qtdeHoras-20;
					valorTotal=valorBasico+(qtdeHoras*0.1*valorBasico);
					printf("O valor total a ser pago = R$:%.2f\n", valorTotal);
				}
			printf("\n");
			printf("Clicle 'S' para calculo ou enter para sair:\n\n");
			letra=toupper(getch());
	}while(letra=='S');
	
	return 0;
}
