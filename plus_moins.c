#include<stdio.h>
#include<stdlib.h> //for random

void plus_moins(int valeur, int choix)
{
	if(choix>valeur)
		printf("Le nombre est plus petit.\n");
	else if(choix<valeur)
		printf("Le nombre est plus grand.\n");
	else
		printf("BINGO.\n");
}

void main()
{
	int valeur;
	int choix;
	valeur=rand() % 100 + 0; //random generator

	do
	{
		printf("Enrez une valeur : ");
		scanf("%d", &choix);
		plus_moins(valeur,choix);
	}while(valeur!=choix);
}
