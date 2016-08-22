void numno (**p){
	no p1;
	int cont;
	p1 = *p;
	while (p1->proxno != NULL){
		cont = cont + 1;
	}
	printf("Número de nós: %i", cont);
}