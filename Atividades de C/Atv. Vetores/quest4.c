/*4. Fa�a um algoritmo que leia at� 30 letras e as escreva na 
ordem inversa (ou contr�ria) da que foram lidas.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void main(){
	char texto[10], inverso[10];
	int i=0, j=0, l=0;
	setlocale(LC_ALL,"");
	
		printf("Entre com um texto:\n");
		gets(texto);
		
		for(i=strlen(texto)-1; i>=0 ;i--){
			inverso[j]=texto[i];
			j++;
		}
		inverso[j]='\0';
		//Aqui tentei fazer com outra l�gica, mas n�o consegui.
			//for(i=0;texto[i]!='\0';i++){
		//	for(j=i;j>=0;j--){
	    //	inverso[l]=texto[j];
		//	l++;
		//	}
	    //}
		//inverso[l]='\0';
		printf("O inverso do texto �:%s\n", inverso);
		system("pause");
}
