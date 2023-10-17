#ifndef EXO_5_H_
#define EXO_5_H_

#include <stdio.h>
#include <stdlib.h>

void exo_5(void)
{
	printf("Execution Exo 5...\n");

	unsigned num = 0;
	printf("entrez la taille du vecteur: ");
	scanf("%u", &num);

	unsigned *vecteur = (unsigned *)malloc(num * sizeof(unsigned));
	
	if(!vecteur)
	{
		printf("allocation de memoire a echoue\n");
		return;
	}

	for(unsigned int i = 0; i < num; i++)
		vecteur[i] = 10 * i;
	
	printf("les elements du vecteur: \n");
	
	for(unsigned int i = 0; i < num; i++)
		printf("vecteur[%u] = %u", i, vecteur[i]);

	unsigned n = 0;
	unsigned m = 0;

	printf("==============================================\n");
}

#endif