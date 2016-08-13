#include <stdio.h>
#include <stdlib.h>

typedef struct bodyNo{
	int idade;
	float sal;
	struct bodyFicha *proxno;
} NO;

void addfim(NO **pt, int a){
	NO *p1;
	p1 = *pt;
	if (p1 == NULL){
		p1 = malloc(sizeof(NO));
		*pt = p1;
	}else{
		
	}
		
}

int main(){
	NO *ptr = NULL;
	addfim(&ptr, 100);
	return 0;
}

