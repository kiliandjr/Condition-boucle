#include <stdlib.h>
#include <stdio.h>
int main()
{
	int nombre;
	int compteur=0;
	printf("Choisissez un nombre différent de 0: ");
	scanf("%d", &nombre);
	while (compteur<=nombre) {
		printf("%d\n", compteur);
		compteur=compteur+1;}
	exit(0);
}

