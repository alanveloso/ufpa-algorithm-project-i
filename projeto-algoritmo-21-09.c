#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	char letra;
	struct no *pesq;
	struct no *pdir;
}no;

no * criararv_vazia(void){
	return NULL;
}

no * criar_arv(char c, no *sae, no *sad){
	no *arv;
	arv = (no *)malloc(sizeof(no));
	arv->letra = c;
	arv->pdir = sae;
	arv->pesq = sad;
	return arv;
}

int arv_vazia(no *pno){
	return (pno == NULL);
}

void imp_arvore(no *parv){
	printf("<");
	if (!arv_vazia(parv)){
		printf("%c", parv->letra);
		imp_arvore(parv->pdir);
		imp_arvore(parv->pdir);
	}
	printf(">");
}

int main() {
	no *arv1, *arv2, *arv3, *arv4, *arv;
	
	arv1 = criar_arv('2', NULL, NULL);
	arv2 = criar_arv('3', NULL, NULL);
	arv3 = criar_arv('+', arv1, arv2);
	
	arv4= criar_arv('7', NULL, NULL);
	
	arv = criar_arv('*', arv3, arv4);
	
	imp_arvore(arv);
	
}
