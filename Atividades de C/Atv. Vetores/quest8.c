/*8. Fazer um algoritmo que leia at� 30 caracteres e os ordene em ordem decrescente. 
� considerado que A < B < C < ... (ordem alfab�tica).*/

#define max 30
main(){
	char letras[max], aux;
	int ind, qtde, ind2;
	printf("Digite as letras:\n");
	ind=0;
	
	do{
		letras[ind]=getche();
		ind++;
	}while(ind<max && letras[ind-1]!='\r');
	qtde=ind-1;

	printf("\nOrdem decrescente:\n");
		for(ind=qtde-1;ind>=0;ind--)
			printf("%c", letras[ind]);
}

