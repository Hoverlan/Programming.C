/*7. Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. 
Após este cadastro, o algoritmo deverá possibilitar a execução de uma de Suas funções 
para aumento dos preços cadastrados, sendo a primeira de 10% para todos os CDs, enquanto 
a segunda aumenta o percentual informado pelo vendedor para todos os CDs. Será o vendedor 
que escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual 
de aumento e, para cada CD, o valor sem aumento e o valor com aumento.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 3
void aumento10(int ind,float valorCD[]);
void aumentoX(int ind,float valorCD[]);
main(){
	float valorCD[MAX];
	int ind, op, qtde;
	ind=0;
	setlocale(LC_ALL,"");
	
	do{
		printf("Informe o valor do %iº CD: \n", ind+1);
		scanf("%f", &valorCD[ind]);
		printf("Digite 's' para adicionar um novo CD:\n");
		ind++;	
	}while(getch()=='s' && ind<MAX);
	
		for(ind=0;ind<MAX;ind++){
		  printf("%iº CD custa:R$%.2f\n",ind+1, valorCD[ind]);	
		  printf("\n");
		}
	
	printf("Escolha uma opcão:\n");
	printf("1- aumento de 10 por cento dos valores.\n");
	printf("2- determinar o aumento dos valores.\n");
		scanf("%i", &op);
		    if(op==1){
	     	 aumento10(ind, valorCD);
			}else{
		 	 aumentoX(ind, valorCD);	
			}

}

void aumento10(int ind, float valorCD[]){
  int ind2;
  ind2=ind;
  for(ind=0;ind<ind2;ind++){
  	printf("Valor normal: \n");
    printf("%iº CD: %.2f \n",ind+1, valorCD[ind]);
	printf("Com aumento de %i por cento \n",10);
	printf("Valor reajustado: \n");
	printf("%iº CD: R$%.2f \n",ind+1, valorCD[ind]*1.10);	
  }	
}
void aumentoX(int ind,float valorCD[]){
  int ind2;
  float aumento,perc;
  ind2=ind;
  aumento=0;
  printf("Digite o percentual que deseja aumentar:\n");
  scanf("%f",&perc);
    for(ind=0;ind<ind2;ind++){
  	printf("Valor normal: \n");
    printf("%iº CD: R$%.2f \n",ind+1,valorCD[ind]);
    printf("Percentual de aumento dado %f \n", perc);
	printf("Valor reajustado: \n");
	aumento=valorCD[ind]*(perc/100)+valorCD[ind];
	printf("%iº CD: R$%.2f \n",ind+1,aumento);	
  }	
}

