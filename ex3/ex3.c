#include <stdlib.h>
#include <stdio.h>
int main()
{
	char mot[100];
	printf("Quel est votre mot?");
	scanf("%s", mot);
	int compteur = 0;	

	while (compteur<5){
		printf("%s\n", mot);
		compteur = compteur + 1; }
	exit(0);
}
