/* 2 � Fa�a um programa que receba do usu�rio um arquivo texto e mostre na tela quantas
letras s�o vogais e quantas s�o consoantes.*/
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
 	FILE *fp;
 	char caracter, nome[25];
 	setlocale(LC_ALL,"");
 	int contVogal=0, contCons=0;
 	
 		
 		printf("Digite o nome do arquivo:\n");
		gets(nome);
		if((fp=fopen(nome, "r"))!=NULL){
			while(caracter=getc(fp)!=EOF){
				caracter=tolower(caracter);
				if(caracter=='a'||caracter=='e'||caracter=='i'||caracter=='o'||caracter=='u'){
					contVogal++;
				}else{
					if(caracter>'a'&&caracter<='z')
						contCons++;
					}
			}
				fclose(fp);
		}
			printf("O arquivo %c possui: %i vogais e %i consoantes.\n",nome, contVogal, contCons);
}
