#ifndef EXO_3_H_
#define EXO_3_H_

#include <stdio.h>

void exo_3(void)
{
	printf("Execution Exo 3...\n");

	int M[3][2] = {
		{ 10, 15 },
		{ -5, 17 },
		{ 11, -9 }
	};

	for(int i = 0; i < 3; i++)
	{
		printf("l'adresse de la ligne[%d] est %p\n", i, &M[i]);
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("l'address de l'element %d est %p\n", M[i][j], &M[i][j]);
		}
	}

	for(int i = 0; i < 3; i++)
	{
		printf("la ligne %d contient [%d, %d]\n", i, M[i][0], M[i][1]);
	}

	printf("==============================================\n");
}

#endif