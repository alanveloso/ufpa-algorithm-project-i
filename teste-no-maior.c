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
	
	NO no1, no2, no3, no4, no5, no6, no7, *p;
	int i;
	
	no1.valor = 10;
	no2.valor = 20;
	no3.valor = 30;
	no4.valor = 40;
	no5.valor = 50;
	no6.valor = 60;
	no7.valor = 70;
	
	no1.proximo = &no2;
	no2.proximo = &no3;
	no3.proximo = &no4;
	no4.proximo = &no5;
	no5.proximo = &no6;
	no6.proximo = &no7;
	no7.proximo = NULL;

	i = no1.proximo -> valor;

	printf("%i - ", i);
	printf("%i\n", no2.proximo->valor);
	mostrar_lista(no1);
}
