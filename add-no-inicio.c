#include <stdio.h>
#include <stdlib.h>

typedef struct testeno{
	int idade;
	struct testeno *proxno;
} no;

void addnoin (no **p, int a){
	no *p1;
	/* necessita da biblioteca "stdlib.h"
	 * mesma for de referenciar ponteiro, p->idade
	 * ou (*p1).proxno. São equivalentes.
	 */
	p1 = malloc(sizeof(no)); 
	p1->idade = a;
	(*p1).proxno = *p;
	//printf ("%p\n", p1->proxno);
	*p = p1;
}

void mostrar (no *po){
	//printf("%i\n", po->idade);
	while (po->proxno != NULL) {
		printf("%i\n", po->idade);
		po = po->proxno;
	}
}

int main(){
	// determina somente o tipo
	no *ptr = NULL;
	//aloca um espaço na memória, como se tivesse algo
	ptr = malloc(sizeof(no));
	addnoin (&ptr, 15);
	//printf("%p\n", ptr->proxno);
	//printf("%i\n", ptr->idade);
	mostrar (ptr);
	return 0;
}

