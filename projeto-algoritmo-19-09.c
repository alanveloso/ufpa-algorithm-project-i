#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int dado;
	struct no *proxno;
}no;

int fat (int num){
	if (num == 0)
		return(1);
	else
		return(num * fat(num-1));
}

no * criarno (int y){
	no *no1;
	no1 = (no *)malloc(sizeof(no));
	no1->dado = y;
	//no1->proxno = NULL;
	return(no1);
}

int main() {
	int i = 0;
	no *x, *outro;
	outro = x;
	//printf("%i\n", fat(4));
	while (i < 5){
		x = criarno(i);
		i++;
		x=x->proxno;
	}
	printf("%i\n", x->dado);
}
