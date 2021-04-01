/*. Desenvolva um algoritmo que leia o nome e o sexo de uma pessoa e apresente como 
saída uma das seguintes mensagens: “Ilmo. Sr.” para o sexo masculino ou “Ilma. 
Sra.” para o sexo feminino, acrescentando o nome em seguida. Observe o exemplo 
de um resultado:
Ilma. Sra. Ana Rita*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void main(){
  char nome[25];
  char sexo;
  
  printf("Digite seu nome:\n");
  gets(nome);
  do{
  	  printf("Informe o seu sexo: 'M' masculino ou 'F' feminino\n");
 		 sexo=toupper(getch());
 		 if(sexo!='M' && sexo!='F'){
 		 	printf("Sexo invalido!\n");
		  }
 	}while(sexo!='M' && sexo!='F');
 		if(sexo=='M'){
 			 printf("Ilmo. Sr. %s ", nome);
		 }else{
		 	printf("Ilma. Sra. %s ", nome);
		 }
 	system("pause");
}
