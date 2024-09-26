#include <stdlib.h>
#include <stdio.h>

int main()
{
	int nombre;
	printf("Choisissez un nombre entier: ");
	scanf("%d",&nombre);
	if (nombre>42){
	printf("Votre nombre est supérieur à 42\n");}
	else{
	printf("Votre nombre est inférieur ou égal à 42\n");}
	exit(0);
}
