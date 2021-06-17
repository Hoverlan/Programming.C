/*1 – Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário
entre com o caractere ‘0’
(c) Feche o arquivo. Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os 
caracteres armazenados*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
int main(){
	FILE *fp;
	char caracter, texto[100];
	int i=0;
	
	setlocale(LC_ALL, "Portuguese");		//a de add - adicionar
	fp=fopen("arq.txt", "w"); // w de write - escrever no arquivo
	if(fp!=NULL){				//r de read - ler arquivo
		puts("Arquivo aberto com sucesso.");
		puts("Digite os caracteres para arquivar ou zero para sair:");
			fflush(stdin);
			while((caracter=getche())!='0'){
				putc(caracter, fp); 	//a função putc passa os caracteres para fp
			}
			fclose(fp);
	}
	
	if((fp=fopen("arq.txt", "r"))!=NULL){
		puts("\n\nArquivo reaberto.");
		while(caracter=getc(fp)!=EOF){
			texto[i]=caracter;
			i++;
		}
			fclose(fp);
			texto[i]='\0';
	}	
		puts(texto);
}
