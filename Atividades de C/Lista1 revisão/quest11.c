/*11. Faça um programa em C que leia um número de DDD e informe a qual cidade este 
DDD pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int DDD;
	char letra;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite o DDD desejado:\n");
		scanf("%i", &DDD);
	
			if(DDD==61){
				puts("Brasília");
			}else
			if(DDD==71){
				puts("Salvador");
			}else
			if(DDD==11){
				puts("São Paulo");
			}else
			if(DDD==21){
				puts("Rio de Janeiro");
			}else
			if(DDD==32){
				puts("Juiz de Fora");
			}else	
			if(DDD==19){
				puts("Campinas");
			}else	
			if(DDD==27){
				puts("Vitória");
			}else	
			if(DDD==31){
				puts("Belo Horizonte");
			}else{
			puts("Cidade no Brasil sem identificação!\n");
		}
			printf("Cicle 'S' para digitar outro DDD ou enter para sair:\n");
			letra=toupper(getch());
	}while(letra=='S');
	
	return 0;
}
