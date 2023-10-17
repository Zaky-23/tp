#ifndef EXO_2_H_
#define EXO_2_H_

#include <stdio.h>

void exo_2(void)
{
	printf("Execution Exo 2...\n");

	int t[5] = {10, 20, 30, 40, 50};

 	printf("la valeur de t est : %p \n", t); 
 	
	for (int i = 0; i<=4; i++)
 	{ 
		printf ("l'adresse de t[%d] est %p\n", i, t+i); 
 		printf("t[%d] = %d", i, t[i]);
	}

 	*(t+4) = 90;
 	for (int i=0; i<=4; i++)
 		printf("t[%d] = %d", i, t[i]);
	char *ch = "Dich Dich Dich";

 	printf("l'adresse de la chaine ch est : %p\n", ch);
 	printf("le contenu de la chaine ch est : %s\n", ch);

	printf("==============================================\n");
}

#endif