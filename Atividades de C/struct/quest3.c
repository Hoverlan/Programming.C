#include <stdio.h>
#include <stdlib.h>
#define MAX 50
/* 3. Escreva as instru��es necess�rias para definir um tipo de ESTRUTURA que contenha
2 elementos, uma �STRING� de 10 caracteres e um INTEIRO:*/

// Instru��es para definir uma estrutura
// A estrutura deve ser definida na parte inicial do c�digo, mas pode ser
// que seja em um arquivo a parte - nesse caso o arquivo deve ser incluso na 
// partes de bibliotecas da main, como no exemplo (#include"estrutura.h").
struct exemplo{			// a estrutura deve receber um nome de defini��o;
	char elemento1[10]; // na parte interna do bloco da estrutura s�o declarados os elementos;
	int elemento2;  	
};
typedef struct exemplo Estrutura;  // A fun��o typedef pode ser utilizada para fazer a redefini��o 
								   // do nome da estrutura, o que a torna mais pr�tica para trabalhar.
								   // Na redefini��o, o termo deve vir com a letra inicial maiuscula. 
int main(int argc, char *argv[]) { 
	Estrutura vetor[MAX];         // Na main, a estrutura deve acompanhar a vari�vel que armazena os 
								  // dados recebidos atrav�s dos elementos declarados no bloco dela mesma.
	return 0;
}
