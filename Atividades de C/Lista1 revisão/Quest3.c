/*3. Fa�a um algoritmo que leia tr�s valores e verifique se eles podem constituir os 
lados de um tri�ngulo (tri�ngulo � uma figura geom�trica onde cada lado � menor do 
que a soma dos outros dois lados). Somente em caso afirmativo, o algoritmo deve 
escrever uma mensagem informando o usu�rio que os valores fornecidos podem 
formar um tri�ngulo.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	float n1, n2, n3;
	setlocale(LC_ALL, "");
	
	do{
		printf("Digite o primeiro numero:\n");
		scanf("%i", &n1);
		printf("Digite o segundo numero:\n");
		scanf("%i", &n2);
		printf("Digite o terceiro numero:\n");
		scanf("%i", &n3);
		if(n1+n2>n3 && n2+n3>n1 && n1+n3>n2){
			puts("Os valores formam um tri�gulo!");
			exit(1);
		}else{
			puts("Os valores n�o podem formar um tri�ngulo. Digite outros n�meros!");
		}
	}while(1);
	
	return 0;
}
