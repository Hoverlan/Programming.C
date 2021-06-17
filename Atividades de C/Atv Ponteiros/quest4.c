/*4. Crie uma função que aceite como parâmetro um vetor de inteiros com N valores, e 
determina o maior elemento do vetor e o número de vezes que este elemento ocorreu no 
vetor. Por exemplo, para um vetor com os seguintes elementos: 3, 5, 12, 6, 7, 27, 9, 16, 
27, a função deve retorna para o programa que a chamou o valor 27 e o número 2 
(indicando que o número 27 ocorreu 2 vezes). A função deve ser do tipo void.*/

void veridicarValores(int *vet, int *cont, int *maiorV);
int main(){
	int vet[1000];
	int ind, contador=0, maiorValor;
	
	for(ind=1;ind<100;ind++){
		vet[ind]=rand();		
	}
	veridicarValores(vet, &contador, &maiorValor);
	printf("Maior valor:%i - se repete:%i vezes.\n ", maiorValor, contador);
}

void veridicarValores(int *vet, int *cont, int *maiorV){
	int i;
	*maiorV=*vet;
		for(i=1;i<1000;i++){
			if(*maiorV<*(vet+i))
			*maiorV=*(vet+i);
		}
		for(i=0;i<1000;i++){
			if(*maiorV==*(vet+i))
			(*cont)++;
		}
	
}

