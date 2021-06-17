/*2. Crie um programa em C que receba três números do usuário depois crie uma função 
que receba os 3 números como parâmetros: A, B e C. Ordene de tal forma que, ao final 
da função, A contenha o menor número e C o maior. Imprima os três números. Obs: 
Utilize ponteiro para solucionar o problema.*/


void main(){
	int a, b, c;
	int *pa,*pb, *pc;
	printf("Digite um valor para A:\n");
	scanf("%i",&a);
	pa=&a;
	printf("Digite um valor para B:\n");
	scanf("%i",&b);
	pb=&b;
	printf("Digite um valor para C:\n");
	scanf("%i",&c);
	pc=&c;
	printf("A=%i, B=%i, C=%i\n", a,b,c);
	
	ordenaValores(&a, &b, &c);
	printf("A=%i, B=%i, C=%i\n", a,b,c);
}
void ordenaValores(int *pa, int *pb, int *pc){
	int aux;
	if(*pb<*pa && *pb<*pc){
		aux=*pb;
		*pb=*pa;
		*pa=aux;
			if(*pb>*pc){
				aux=*pb;
				*pb=*pc;
				*pc=aux;
			}
	}else
		if(*pc<*pa && *pc<*pb){
		aux=*pb;
		*pb=*pa;
		*pa=aux;
			if(*pb>*pc){
				aux=*pb;
				*pb=*pc;
				*pc=aux;
			}
		}else
			if(*pb>*pc){
				aux=*pb;
				*pb=*pc;
				*pc=aux;
			}
}



