#include <stdlib.h>
#include <stdio.h>

int main()
{

	char signe;
	printf("Quel est votre opérateur?\n ");
	scanf("%s", &signe);
	if (signe == '+' ){
	printf("Votre opération est une addition\n");}
	else if (signe == '-'){
	printf("Votre opération est une soustration\n");}
	else if (signe == '*'){
	printf("Votre opération est une multiplaction\n");}
	else if (signe == '/'){
	printf("Votre opération est une division\n");}
	else if (signe == '%'){
	printf("Votre opération est un reste de divison\n");}
	else {
	printf("Votre opération n'est pas connu\n");}
	exit(0);

}
