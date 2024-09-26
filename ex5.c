#include <stdlib.h>
#include <stdio.h>
int main()
{
	int nombre;
	char symbole;
	int compteur=0;
	printf("Quel est votre symbole?");
	scanf("%s", &symbole);
	printf("Quel est votre nombre différent de 0?");
	scanf("%d", &nombre);
	if (symbole=='+') {
		while(compteur<=nombre) {
			printf("%d\n", compteur);
			compteur=compteur+1; }}
	else if (symbole=='-') {
		while(compteur<=nombre) {
			printf("%d\n", nombre);
			nombre=nombre-1;}}
	else{
		printf("Le symbole n'est valide\n");}
	exit(0);
}

