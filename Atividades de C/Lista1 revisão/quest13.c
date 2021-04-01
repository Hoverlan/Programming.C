/*13. Faça um algoritmo que leia o nome e a altura de três pessoas, e determine e 
apresente o nome e a altura da menor delas.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	char nome1[15], nome2[15], nome3[15];
	float alt1, alt2, alt3, menorAlt=0;
	char letra;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite o nome da primeira pessoa:\n");
		fflush(stdin);
		gets(nome1);
		printf("Digite a altura:\n");
		scanf("%f",&alt1);
		
		printf("Digite o nome da segunda pessoa:\n");
		fflush(stdin);
		gets(nome2);
		printf("Digite a altura:\n");
		scanf("%f",&alt2);
		
		printf("Digite o nome da terceira pessoa:\n");
		fflush(stdin);
		gets(nome3);
		printf("Digite a altura:\n");
		scanf("%f",&alt3);		
		
		if(alt1<alt2 && alt1<alt3){
			printf("A pessoa de menor altura é %s com %.2f\n", nome1, alt1);
			}else
				if(alt2<alt1 && alt2<alt3){
					printf("A pessoa de menor altura é %s com %.2f\n", nome2, alt2);
				}else
					if(alt3<alt1 && alt3<alt2){
						printf("A pessoa de menor altura é %s com %.2f\n", nome3, alt3);
					}
			printf("\n");
		printf("Clicle 'S' para calculo ou enter para sair:\n\n");
		letra=toupper(getch());
	}while(letra=='S');
	
	return 0;
}
