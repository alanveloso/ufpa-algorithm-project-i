#include <stdio.h>

void retiradaSubPalavra (char palavra[], int inicio, int Tamanho, char subPalavra[]){
	int i = 0;
	inicio--;
	Tamanho  = Tamanho + inicio;
	while ((inicio != Tamanho) || (palavra[inicio] != '\0')){
		subPalavra[i] = palavra[inicio];
		inicio++;
		i++;
	}
	subPalavra[i] = '\0';
}

int main(){
	char palavra[20], subPalavra[20];
	int inicio, tamanho;
	printf ("Palavra:");
	scanf("%s", palavra);
	printf ("Inicio:");
	scanf("%i", &inicio);
	printf("Tamanho: ");
	scanf("%i", &tamanho);
	retiradaSubPalavra (palavra, inicio, tamanho, subPalavra);
	printf("%s", subPalavra);
}

