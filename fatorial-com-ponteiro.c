#include <stdio.h>

void fac (int *fac){
	int nfac;
	if (*fac == 0){
		printf("1");
	} else {
		nfac = *fac;
		printf("%i\n", nfac);
		while( *fac > 1){
			nfac = nfac * (*fac - 1);
			*fac = *fac-1;
		}
		*fac = nfac;
	}
}

int main(){
	int num = -1, *pnum = &num;
	while (num  < 0){
		printf("Número: ");
		scanf("%i", pnum);
		fac(pnum);
	}
	printf("%p", &num);
	
	return 0;
}

