/*11. Fa�a um programa em C que leia um n�mero de DDD e informe a qual cidade este 
DDD pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o*/

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
				puts("Bras�lia");
			}else
			if(DDD==71){
				puts("Salvador");
			}else
			if(DDD==11){
				puts("S�o Paulo");
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
				puts("Vit�ria");
			}else	
			if(DDD==31){
				puts("Belo Horizonte");
			}else{
			puts("Cidade no Brasil sem identifica��o!\n");
		}
			printf("Cicle 'S' para digitar outro DDD ou enter para sair:\n");
			letra=toupper(getch());
	}while(letra=='S');
	
	return 0;
}
