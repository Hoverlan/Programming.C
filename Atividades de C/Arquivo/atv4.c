/* 4 � Fa�a um programa que receba dois arquivos do usu�rio, e crie um terceiro arquivo 
com o conte�do dos dois primeiros juntos (o conte�do do primeiro seguido do conte�do 
do segundo).*/
#include<stdio.h>
#include<string.h>
 main(){
 	FILE *fp, *fp2;
 	char nome[25], texto[100];
 	int cont=1;
 	
 	fp2=fopen("arquivoFinal.txt", "w");//arquivo que vai pegar os outros dois arquivs
 	do{
 		printf("Digite o nome do %i%c arquivo:\n", cont, 167);
		fflush(stdin);		//uma fun��o roda duas vzs e colhe dados do segundo arquivo
		gets(nome);
		if((fp=fopen(nome, "r"))!=NULL){
			cont++;
			while(fgets(texto,99,fp)!=NULL){
				fputs(texto,fp2);
			}
				fclose(fp);
		}else{
			printf("%i%c arquivo n�o pode ser aberto!\n", cont, 167);
		}
	 }while(cont<=2);
 	fclose(fp2);
 }
