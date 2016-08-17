#include <stdio.h>
#include <stdlib.h>

typedef struct bodyno{
	int idade;
	struct bodyno *prox;
 }no;

void removefim (no **p){
	no *p1, *p2;
	p1 = *p;
	while (p1->prox != NULL){
		p2 = p1;
		p1 = p1->prox;
		if (p1->prox == NULL){
			free(p1);
			p2->prox = NULL;
		}
	}
}

int main() {
	no *ptr;
	removefim(&ptr);
	return 0;
}
