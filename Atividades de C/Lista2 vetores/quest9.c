/*9. Faça um algoritmo que leia a idade de até 100 pessoas e apresente a 
média entre todas, além de identificar a mais velha e a posição em que 
ela se encontra no vetor. A idade mais velha pode aparecer em mais de uma 
posição*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 5

int main(){
	int idades[MAX];
	int ind=0, somaIdades=0, maiorIdade=0;
	float mediaIdade;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite a idade da %iª pessoa:\n", ind+1);	
		scanf("%i",&idades[ind]);
			if(idades[ind]<=0){
				puts("Idade iválida!");
			}else{
				somaIdades+=idades[ind];
				ind++;
			}
		printf("Pressione 's' para nova idade ou enter para sair:\n");
	
	}while(ind<MAX && getch()=='s');
		for(ind=0; ind<MAX; ind++){
			if(maiorIdade<idades[ind]){
				maiorIdade=idades[ind];
			}
		}
	mediaIdade=somaIdades/ind;
	printf("A média das idades é:%.2f\n", mediaIdade);
	printf("A maior idade é:%i anos e está na posição:%i\n", maiorIdade, ind);
	return 0;
}
