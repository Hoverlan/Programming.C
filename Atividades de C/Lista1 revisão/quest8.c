/*8. Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente,
 para que leia a altura da pessoa e apresentar seu peso ideal com base 
 nas seguintes fórmulas: 
 Sexo masculino: peso = (72.5 * altura) - 58.0
 Sexo feminino: peso = (62.1 * altura) - 44.7*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
void main(){
  char nome[25];
  char sexo;
  float alt, peso;
  setlocale(LC_ALL,"");
  
  printf("Digite seu nome:\n");
  gets(nome);
  printf("Informe sua altura:\n");
  scanf("%f",&alt);
  do{
  	  printf("Informe o seu sexo: 'M' masculino ou 'F' feminino\n");
 		 sexo=toupper(getch());
 		 if(sexo!='M' && sexo!='F'){
 		 	printf("Sexo invalido!\n");
		  }
 	}while(sexo!='M' && sexo!='F');
 		if(sexo=='M'){
 			 peso = (72.5 * alt) - 58.0;
 			 printf("Ilmo. Sr. %s ", nome);
 			 printf("Seu peso ideal é: %.2f\n", peso);
		 }else{
		 	peso=(62.1 * alt) - 44.7;
		 	printf("Ilma. Sra. %s ", nome);
		 	printf("Seu peso ideal é: %.2f\n", peso);
		 }
 	system("pause");
}
