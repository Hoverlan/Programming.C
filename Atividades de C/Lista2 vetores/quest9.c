/*9. Fa�a um algoritmo que leia a idade de at� 100 pessoas e apresente a 
m�dia entre todas, al�m de identificar a mais velha e a posi��o em que 
ela se encontra no vetor. A idade mais velha pode aparecer em mais de uma 
posi��o*/

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
		printf("Digite a idade da %i� pessoa:\n", ind+1);	
		scanf("%i",&idades[ind]);
			if(idades[ind]<=0){
				puts("Idade iv�lida!");
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
	printf("A m�dia das idades �:%.2f\n", mediaIdade);
	printf("A maior idade �:%i anos e est� na posi��o:%i\n", maiorIdade, ind);
	return 0;
}
