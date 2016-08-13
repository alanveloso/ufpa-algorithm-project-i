#include <stdio.h>

int main (){
	typedef struct testeno {
		int valor;
		struct testeno *proximo;
	} NO;

	NO no1, no2, no3, *p;
	int i;
	
	no1.valor = 10;
	no2.valor = 20;
	no3.valor = 30;
	
	no1.proximo = &no2;
	no2.proximo = &no3;
	no3.proximo = NULL;

	i = no1.proximo->valor;

	printf("%i - ", i);
	printf("%i\n", no2.proximo->valor);
	
	p = &no1;
	while (p != NULL){
		printf("O dado é: %i \n", p -> valor);
		p = p->proximo;
	}
}

