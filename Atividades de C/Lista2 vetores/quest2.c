/*2. Altere o algoritmo anterior considerando que n�o se conhece 
quantos alunos esta turma tem (menos que 50). 
O n�mero de aluno ser� informado pelo usu�rio.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float notas[50];
	int i, qtdeAlunos;
	setlocale(LC_ALL,"");
	
		printf("Informe a quantidade de alunos (maximo 50):\n");
		scanf("%i",&qtdeAlunos);
			for(i=0;i<qtdeAlunos;i++){
			printf("Digite a %i� nota:\n", i+1);
			scanf("%f", &notas[i]);
	}
		printf("Notas:\n");
		for(i=0;i<qtdeAlunos;i++){
			printf("%i�: %.2f\n ", i+1, notas[i]);
		}

		

return 0;
}
