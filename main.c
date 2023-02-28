#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nom = 0;
	int age = 0;
	printf("hello world!\n");
	printf("le chiffre %d \n",nom);
/*	int som = var+varr;
	printf("la somme entre %d et %d est varrr", var, varr, som);*/
	printf("quel et votre nom?\n");
	scanf("%d",&nom);
	printf("quel age avez vous?\n");
	scanf("%d",&age);
	printf("donc vous vous nommez %d et vous avez %d ans!!!!!\n",nom, age);
	return 0;
}
