#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct bodyno no;

struct bodyno
{
	char idade[2];
	no *pdir, *pesq;
};

void criar_lista (no **pnew, char id[])
{
	*pnew = malloc(sizeof(no));
		strcpy ((*pnew)->idade, id);
		(*pnew)->pdir = NULL;
		(*pnew)->pdir = NULL;
}

void add_no_fim (no **p)
{
	char id[2];
	no *p1 = *p;
	if (p1 == NULL)
	{
		criar_lista (&p1, id);
		*p = p1;
	} else
	{
		while (p1->pdir != NULL)
			p1 = p1->pdir;
			
		p1->pdir = malloc(sizeof(no));
		strcpy (id, p1->idade);
		(p1->pdir)->pesq = p1;
		(p1->pdir)->pdir = NULL;
	}
}

void add_no_ini (no **p)
{
	char id[2];
	no *p1 = *p;
	if (p1 == NULL)
	{
		criar_lista (&p1, id);
		*p = p1;
	} else
	{
		p1->pesq = malloc(sizeof(no));
		strcpy (id, (p1->pesq)->idade);
		(p1->pesq)->pdir = p1;
		(p1->pesq)->pesq = NULL;
		*p =  p1->pesq;
	}
}

void add_no_meio (no **p)
{
	int pos;
	char id[2];
	no *p1 = *p, *p2;
	if (p1 == NULL)
	{
		criar_lista (&p1, id);
		*p = p1;
	} else
	{
		while (pos > 0)
		{
			p1 = p1->pdir;
			pos--;
		}
		p2 = p1->pdir;
		p1->pdir = malloc(sizeof(no));
		strcpy ((p1->pdir)->idade, id);
		(p1->pdir)->pdir = p2;
		(p1->pdir)->pesq = p1;
	}
}

int main()
{
	
	return 0;
}

