/*6. Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários 
de uma empresa (máximo de 100 funcionários). Após a leitura de todos os dados, 
informe em uma tela limpa os dados lidos e o maior e menor salário dos funcionários. 
O maior e menor salário deverão ser obtidos, cada um, por uma função. 
Sabese ainda que não existe matrícula repetida na empresa*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 100
int verificaMaiorSalario(int ind, float sal[]);
int verificaMenorSalario(int ind, float sal[]);
int main(){
	int mat[MAX], ind=0, ind2, flag;
	float sal[MAX];
	int maiorSal, menorSal;
	setlocale(LC_ALL, "");
	
	do{
		do{
			flag=0;
			printf("Digite a matrícula do %iº funcionário:\n", ind+1);
			scanf("%i", &mat[ind]);
				if(mat[ind]<=0){
					puts("Matrícula inválida!");
					flag=1;
				}else
					if(ind>0){
					for(ind2=0;ind2<ind;ind2++){
						if(mat[ind] == mat[ind2]){
							printf("Matricula ja existe, informe outra.\n");
							flag=1;
							break;
						}
					}
				}
			}while(flag==1);
	
			do{
				printf("Informe o salário do %iº funcionário:\n", ind+1);
				scanf("%f", &sal[ind]);
					if(sal[ind]<=0){
						puts("Salário inválido!");
					}
			}while(sal[ind]<=0);
		ind++;
		printf("Pressione 's' para informar novo funcionario:\n");
	}while(ind<MAX && getch()=='s');
		
		system("cls");
		for(ind=0;ind<MAX;ind++){
			printf("O funcionario de matrÍcula:%i recebe R$%.2f\n", mat[ind], sal[ind]);
		}
	maiorSal=verificaMaiorSalario(ind, sal);
		printf("O funcionário de matrícula %i recebe o maior salário:%.2f\n", mat[maiorSal], sal[maiorSal]);
	menorSal=verificaMenorSalario(ind, sal);
		printf("O funcionário de matrícula %i recebe o menor salário:%.2f\n", mat[menorSal], sal[menorSal]);							
	
	puts("Gostou, mande um PIX!");
	return 0;
}

int verificaMaiorSalario(int ind, float sal[]){
	int ind2;
	int maior=0;
		for(ind2=1;ind2<ind;ind2++){
			if(sal[maior]<sal[ind2]){
				maior=ind2;
			}
		}
	
	return maior;
}

int verificaMenorSalario(int ind, float sal[]){
	int ind2;
	int menor=0;
		for(ind2=1;ind2<ind;ind2++){
			if(sal[menor]>sal[ind2]){
				menor=ind2;
			}
		}
	
	return menor;
}
