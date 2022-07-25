#include<stdio.h>
#include<stdlib.h> //for random
#include<time.h> //for time

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
	int pts1,pts2,tour1,tour2,times,valeur1,choix1,coup1,valeur2,choix2,coup2;


	srand(time(NULL)); //based on internal clock of device

	printf("Inserez le nombres de tours a jouer : ");
	scanf("%d", &times);
	int i=0;

	do{
//premier joueur
		int j=0;
		valeur1=rand() % 100 + 0; //random generator
		printf("\n Dans combien de tours doit le joueur gagner le chiffre ?");
		scanf("%d", &coup1);
		do
		{
			printf("\n Entrez un nombre entre 0 et 100 : ");
			scanf("%d", &choix1);
			plus_moins(valeur1,choix1);
			j++;
			if(choix1==valeur1)
				break;
		}while(j<tour1);
		pts1=pts1+(coup1-j+1);
		printf("Vous avez eu %d points.", pts1);

		printf("\n---------------------------------------------------------------\n");

//deuxieme joueur
		int k=0;
		valeur2=rand() % 100 + 0; //random generator
		printf("Dans combien de tours doit le joueur gagner le chiffre ?");
		scanf("%d", &coup2);
		do
		{
			printf("\n Entrez un nombre entre 0 et 100 : ");
			scanf("%d", &choix2);
			i++;
			if(choix2==valeur2)
				break;
		}while(k<tour2);
		pts2=pts2+(coup2-k+1);
		printf("Vous avez eu %d points.", pts2);


		i++;
		printf("\n-------------------------------------------\n");
	}while(i<times);
}
