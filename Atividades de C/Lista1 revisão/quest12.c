/*12. Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de 
acesso � Internet. Para isso, voc� dever� ler a quantidade de horas que voc� utilizou 
do servi�o e fazer o c�lculo sabendo que voc� pagar� R$ 30,00 por at� 20 horas de 
uso (valor b�sico). Caso voc� tenha usado mais de 20 horas de Internet, voc� dever� 
acrescentar 10% do valor b�sico para cada hora extra utilizada.*/

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
