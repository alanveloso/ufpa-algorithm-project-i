#include <stdio.h>
#include <stdlib.h>

typedef struct teste{
    int idade;
    struct teste *proxno;
} no;

adnofim (no **p, int id){
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

void mostrar_lista (no *p){
    while(p != NULL){
        printf("O dado é: %i \n", p->idade);
        p = p->proxno;
    }
}

int main(){
    no *ptr = NULL;
    adnofim(&ptr , 15);
    return 0;
}
