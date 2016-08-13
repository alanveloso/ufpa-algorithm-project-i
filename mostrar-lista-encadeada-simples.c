#include <stdio.h>
#include <locale.h>
typedef struct testeno {
		int valor;
		struct testeno *proximo;
} NO;
	
void mostrar_lista (NO no){
		NO *p;
		p = &no;
	while (p != NULL){
		printf("O dado é: %i \n", p -> valor);
		p = p->proximo;
	}
}

int main (){
	setlocale (LC_ALL, "portuguese");
	
	NO no1, no2, no3, *p;
	int i;
	
	no1.valor = 10;
	no2.valor = 20;
	no3.valor = 30;
	
	no1.proximo = &no2;
	no2.proximo = &no3;
	no3.proximo = NULL;

	i = no1.proximo -> valor;

	printf("%i - ", i);
	printf("%i\n", no2.proximo->valor);
	mostrar_lista(no1);
}
