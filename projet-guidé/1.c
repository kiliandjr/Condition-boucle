#include <stdlib.h>
#include <stdio.h>

int main()
{
	char operateur;

	int nombre1;

	int nombre2;

	printf("Quel est votre opération?");

	scanf("%s", &operateur);

	printf("Quel est votre premier nombre?");

	scanf("%d", &nombre1);

	printf("Quel est votre nombre2");

	scanf("%d", &nombre2);


	if (operateur == '+') {

		int a=nombre1 + nombre2;

		printf("%d + %d = %d",nombre1, nombre2, a);}


	
	else if (operateur == '-') {

                int a=nombre1 - nombre2;

                printf("%d - %d = %d",nombre1, nombre2, a);}


	
	else if (operateur == '*') {

                int a=nombre1 * nombre2;

                printf("%d * %d = %d",nombre1, nombre2, a);}

	
	else if (operateur == '/') {

                double a=nombre1 / nombre2;

                printf("%d / %d = %.5f",nombre1, nombre2, a);}


	else if (operateur == '%') {

                int a=nombre1 % nombre2;

                printf("%d %% %d = %d",nombre1, nombre2, a);}
	
	
	else {
		printf("L'opération n'est pas valide.");}


	exit(0);
}
