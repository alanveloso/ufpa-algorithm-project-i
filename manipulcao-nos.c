#include <stdio.h>
#include <stdlib.h>

typedef struct testeno{
	int idade;
	struct testeno *proxno;
} no;

void add_no_in (no **p, int a){
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

void add_no_fim (no **p, int id){
    no *p1, *p2;
    p1 = *p;
    if (p1 == NULL){
        p1 = malloc(sizeof(no));
        p1->idade = id;
        p1->proxno = NULL;
        *p = p1;
    }else{
        while(p1 -> proxno != NULL){
            p1 = p1->proxno;
            p2 = malloc(sizeof(no));
            if (p2 != NULL){
                p2->idade = id;
                p2->proxno = NULL;
                p1->proxno = p2;
            }
        }
    }
}

void remove_in (no **p){
	no *p1;
	p1 = *p;
	if (p1 != NULL){
		p1 = p1->proxno;
		free(*p);
		*p=p1;
	}
}

void remove_fim (no **p){
	no *p1, *p2;
	p1 = *p;
	if(p1 != NULL){
		if (p1->proxno != NULL){
			free(*p);
			*p = NULL;
			
		}else{
			while (p1->proxno != NULL){
				p2 = p1;
				p1 = p1->proxno;
			}
			free(p1);
			p2->proxno = NULL;
		}
	}
}

void busca_id (no *p){
	int num;
	scanf("%i", &num);
	while (p->proxno != NULL){
		if (p->idade == num){
			printf("Encontrado");
		}
		p = p->proxno;
		
	}
	printf ("Encontrado");
}

//Busca que chega mais longe
int procurar (no *p){
	int num;
	scanf("%i", &num);
	if (p == NULL){
		return 0;
	}else{
		do{
			if (p->idade == num)
				return 1;
			p = p->proxno;
		}while (p != NULL);
		return 0;
	}
}

void bus_apg (no **p){
	no *p1, *p2;
	int num;
	p1 = *p;
	printf("Idade apagada:");
	scanf("%i", &num);
	while (p1->idade != num || p1->proxno != NULL){
		p2 = p1;
		p1 = p1->proxno;
		if (p1->idade == num){
			p2->proxno = p1->proxno;
			free(p1);
			p1 = NULL;
		}
	}
}

void mostrar (no *p){
	//printf("%i\n", po->idade);
	while (p->proxno != NULL) {
		printf("%i\n", p->idade);
		p = p->proxno;
	}
}

void num_no (no *p){
	int cont;
	while (p->proxno != NULL){
		cont = cont + 1;
	}
	printf("Número de nós: %i", cont);
}

int main() {
	
	return 0;
}
