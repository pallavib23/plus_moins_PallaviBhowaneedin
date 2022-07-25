#include<stdio.h>
#include<stdlib.h> //for random

void plus_moins(int valeur, int choix, char choisi)
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
	int i=0;
	char choisi;

	valeur=rand() % 100 + 0; //random generator

	printf("choisir le mode de diificulté : \n");
	printf("facile=f : essaies illimités\n");
	printf("moyen=m : 25 essaies\n");
	printf("difficle=d : 10 essaies\n");
	printf("Votre choix : ");
	scanf("%s", &choisi);

	if(choisi=='f'){
		do
		{
			printf("Entrez une valeur : ");
			scanf("%d", &choix);
			plus_moins(valeur,choix,choisi);
		}while(valeur!=choix);
	}else if(choisi=='m'){
		do 
		{
			printf("Entrez une valeur : ");
			scanf("%d", &choix);
			plus_moins(valeur,choix,choisi);
			i++;
		}while(i<25);
	}else if(choisi=='d'){
		do
		{
			printf("Entrez une valeur : ");
			scanf("%d", &choix);
			plus_moins(valeur,choix,choisi);
			i++;
		}while(i<10);
	}

}
