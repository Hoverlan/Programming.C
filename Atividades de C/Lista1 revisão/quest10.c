/*10. Altere o exerc�cio do tri�ngulo (exerc�cio 3), de forma que o algoritmo apresente no 
caso de tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois 
lados iguais) ou um outro tri�ngulo qualquer (escaleno).*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	float n1, n2, n3;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite o primeiro numero:\n");
		scanf("%f", &n1);
		printf("Digite o segundo numero:\n");
		scanf("%f", &n2);
		printf("Digite o terceiro numero:\n");
		scanf("%f", &n3);
		if(n1+n2>n3 && n2+n3>n1 && n1+n3>n2){
		puts("Os valores formam um tri�gulo!");
			if(n1==n2 && n1==n3)
			puts("Tri�ngulo equil�tero!");
				if(n1==n2 && n2!=n3)
				puts("Tri�gulo is�celes!");
					if(n1!=n2 && n1!=n3 && n2!=n3)
					puts("Tri�gulo escaleno!");
			exit(1);
		}else{
			puts("Os valores n�o podem formar um tri�ngulo. Digite outros:");
		}
	}while(1);
	
	return 0;
}
