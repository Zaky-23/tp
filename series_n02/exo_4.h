#ifndef EXO_4_H_
#define EXO_4_H_

#include <stdio.h>
#include <stdlib.h>

struct st
{
	char nom[30];
	char prenom[30];
	unsigned char age;
};

void exo_4(void)
{
	printf("Execution Exo 4...\n");

	struct st a = { 0 };

	printf("entrez votre nom (<= 30 characteres): ");
	scanf("%s\n", &a.nom);
	printf("entrez votre prenom (<= 30 characteres): ");
	scanf("%s\n", &a.prenom);
	printf("entrez votre age: ");
	scanf("%s\n", &a.age);

	printf("@ st: %p\n", &a);
	printf("@ st.nom: %p\n", &a.nom);
	printf("@ st.prenom: %p\n", &a.prenom);
	printf("@ st.age: %p\n", &a.age);

	printf("==============================================\n");
}

#endif