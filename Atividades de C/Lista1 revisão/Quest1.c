#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Construa um algoritmo que leia a velocidade e a placa do carro de um motorista que 
está trafegando no Eixo Rodoviário (limite de 80 km/h). Caso o motorista esteja 
acima da velocidade máxima permitida, o algoritmo deve multá-lo escrevendo uma 
mensagem na tela. Caso contrário, nada deve ser feito.*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	float velocidade;
	char placa[7];
	
	printf("Placa:\n");
	gets(placa);
						
	do{ 
		printf("Velocidade do veículo:\n");
			scanf("%f", &velocidade);
			if(velocidade<0){
				puts("Não existe!");
			}else{
				if(velocidade<80){
				printf("Obrigado pela direção exemplar!");
					exit(1);
				}
			}
				if(velocidade>80){
					printf("Placa:%s\n", placa);
					printf("Velocidade:%.2f km/h\n", velocidade);
					puts("Motorista multado por excesso de velocidade!");
				}
	}while(velocidade<0);
	system("pause");
			
	return 0;
}
