/*5. Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. 
Associe o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o 
ponteiro (use *)*/
//NÃO ENTENDI
#include<stdio.h>
int main(){
	int vet[5];
	int *p, i;
	
	for(i=0;i<5;i++){
		printf("Digite o %i%c valor:\n ", i+1, 167);
		scanf("%i", (vet+1));
	}
	p=vet;
	
		printf("Endereco ponteiro *p: %i\n", &p);
		printf("Endereco ponteiro *p: %i\n", p);
			for(i=0;i<5;i++){
				printf("Valor:%i\n", *(vet+(i+1)));
				
		 	}
	//	funcao(p);
	
}
//void funcao(int *p){
//	int i;
		
	//	for(i=0;i<5;i++){
	//		printf("Endereco: %i\n", p);
	//		*p=*p+1;
	//	}
	
//}
