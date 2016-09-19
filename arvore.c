#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	char letra;
	struct no *pesq;
	struct no *pdir;
}no;

no * criararv-vazia(){
	return NULL;
}

no * criar-arv(char c, no *sae, *sad){
	no *arv;
	arv = (no *)malloc(no);
	arv->letra = c;
	arv->pdir = sae;
	arv->pesq = sad;
	return arv;
}

int main() {
	no *no1, *no2, *no3, *no4, *no5;
	no1 = (no *)malloc(sizeof(no));
	no2 = (no *)malloc(sizeof(no));
	no3 = (no *)malloc(sizeof(no));
	no4 = (no *)malloc(sizeof(no));
	no5 = (no *)malloc(sizeof(no));
	
	no1->letra = '*';
	no1->pesq = no2;
	no1->pdir = no3;
	
	no2->letra = '+';
	no2->pesq = no4;
	no2->pdir = no5;
	
	no3->letra = 'C';
	no3->pesq = NULL;
	no3->pdir = NULL;
	
	no4->letra = 'A';
	no4->pesq = NULL;
	no4->pdir = NULL;
	
	no5->letra = 'B';
	no5->pesq = NULL;
	no5->pdir = NULL;
	
	return 0;
}
