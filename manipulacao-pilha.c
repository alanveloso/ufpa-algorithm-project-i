#include <stdio.h>
#include <stdlib.h>

typedef struct bodyno{
	char letra;
	struct bodyno *pletra;
} no;

void empilhar (no **plv, char letra){
	no *p = *plv;
	if (p == NULL){
		p = (no *)malloc(sizeof(no));
		p->letra = letra;
		p->pletra = NULL;
		*plv = p; 
	}else{
		p = (no *)malloc(sizeof(no));
		p->letra = letra;
		p->pletra = *plv;
		*plv = p;
	}
}


char desempilhar (no **plv){
	char letra;
	no *p =  *plv;
	if (p == NULL)
		return '\0';
	else{
	letra = p->letra;
	*plv = p->pletra;
	free(p);
	return letra;
	}
} 

void mostrar_pilha(no *p) {
	
    if( p != NULL) {
	    printf("%c\n",p->letra);
	    p = p->pletra;
	}
}

int main(){
	int i = 0;
	char palavra[10], x;
	no *pilha;
	scanf("%s", palavra);
	getchar();
	while (palavra[i] != '\0'){
		empilhar(&pilha, palavra[i]);
		i++;
	}

	do {
		x = desempilhar(&pilha);
	    printf("%c \n", x);
	} while (x != '\0');
	
	mostrar_pilha(pilha);

	return 0;
}
