#include <stdio.h>
#include <stdlib.h>

typedef struct bodyno{
	int idade;
	struct bodyno *prox;
 }no;

void removeini (no **p){
	no *p1;
	p1 = *p;
	if (p1 != NULL){
		p1 = p1->prox;
		free(*p);
		*p=p1;
	}
}

int main() {
	no *ptr;
	removeini(&ptr);
	return 0;
}
