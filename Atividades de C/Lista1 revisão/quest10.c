/*10. Altere o exercício do triângulo (exercício 3), de forma que o algoritmo apresente no 
caso de triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois 
lados iguais) ou um outro triângulo qualquer (escaleno).*/

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
		puts("Os valores formam um triâgulo!");
			if(n1==n2 && n1==n3)
			puts("Triângulo equilátero!");
				if(n1==n2 && n2!=n3)
				puts("Triâgulo isóceles!");
					if(n1!=n2 && n1!=n3 && n2!=n3)
					puts("Triâgulo escaleno!");
			exit(1);
		}else{
			puts("Os valores não podem formar um triângulo. Digite outros:");
		}
	}while(1);
	
	return 0;
}
