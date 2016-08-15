#include <stdio.h>
#include <stdlib.h>

typedef struct bodyno{
	int idade;
	struct bodyno *proxno;
} no;

void addnomeio (no **p, int a){
	no *pt, *p3;
	p3 = malloc(sizeof(no));
	pt = *p;
	p3->idade = 23;
	p3->proxno = pt->proxno;
	pt->proxno = p3;
	*p = pt;
}

void mostrar (no *po){
	while (po != NULL){
		printf("%i\n", po->idade);
		po = po->proxno;
	}
}

int main(){
	no *p1 = NULL, *p2 = NULL;
	p1 = malloc(sizeof(no));
	p2 = malloc(sizeof(no));
	p1->idade = 21;
	p1->proxno = p2;
	p2->idade = 22;
	p2->proxno = NULL;
	addnomeio(&p1, 23);
	mostrar (p1);
	return 0;
}

