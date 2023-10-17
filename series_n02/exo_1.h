#ifndef EXO_1_H_
#define EXO_1_H_

#include <stdio.h>

void exo_1(void)
{
	printf("Execution Exo 1...\n");

	int a; int b = 1;
	int *p1; float *p2;
	a = 10;

	printf("la valeur de a est : %d\n", a);
	printf("la variable a se trouve a l'adresse: %p\n", &a);

 	p1 = &a;

 	printf("la valeur de p1 est : %p\n", p1);
	printf("la valeur de a est : %d\n", *p1);

 	p2 = &b; *p2 = ((float)a)/4 ;

 	printf ("la valeur de b est :%f\n", b);
 	printf ("la variable b se trouve a l'adresse %p\n", p2);

 	p2++; p1++;

	printf("==============================================");
}

#endif