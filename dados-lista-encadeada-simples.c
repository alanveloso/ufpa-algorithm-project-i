#include <stdio.h>

typedef struct bodyFicha{
	int idade;
	int sal;
	struct bodyFicha *pdado;
} dado;

int main(){	
	dado ind1, ind4, ind2, ind3, ind5, *pind0;
	
	ind1.idade = 10;
	ind2.idade = 20;
	ind3.idade = 30;
	ind4.idade = 40;
	ind5.idade = 50;
	
	ind1.sal = 10;
	ind2.sal = 20;
	ind3.sal = 30;
	ind4.sal = 40;
	ind5.sal = 50;
	
	ind1.pdado = &ind2;
	ind2.pdado = &ind3;
	ind3.pdado = &ind4;
	ind4.pdado = &ind5;
	ind5.pdado = NULL;
	
	pind0 = &ind1;
	
	while (pind0 != NULL){
			printf("Idade: %i -  Sal: %i\n", pind0->idade, pind0->sal);
			pind0 = pind0 -> pdado;
	}
	
	return 0;
}

