#include <stdio.h>
#include <stdlib.h>

void removefim (no **p){
	no *p1, *p2;
	p1 = *p;
	if(p1 != NULL){
		if (p1->proxno = NULL){
			free(*p);
			*p = NULL;
			
		}else{
			while (p1->proxn != NULL){
				p2 = p1
				p1 = p1->proxno
			}
			free(p1);
			p2->proxno = NULL;
		}
	}
}

void busapg (no **p){
	p1 = *p;
	int num;
	printf("Idade apagada:");
	scanf("%i", num);
	while (p1->idade != x || p1->proxno != NULL){
		p2 = p1;
		p1 = p1->proxno;
		if (p1->idade == x){
			p2->proxno = p1->proxno;
			free(p1);
			*p1 = NULL;
		}
	}
}

void buscaid (no *p){
	p1 = p
	while ( p1->proxno != NULL){
		if (p1->idade == x){
			printf("Encontrado");
		}
		p1 = p1->proxno;
		
	}
	printf ("Nome: %s", p1->nome);
}

//Busca que chega mais longe
int procurar (no *p, int x){
	if (p == NULL){
		return 0;
	}else{
		do{
			if (p->idade == x)
				return 1;
			p = p->proxno;
		}while (p != NULL);
		return 0
	}
}

int main() {
	
	return 0;
}
