#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
int main()
{

srand(time(NULL));
int random_number = rand() % 100 + 1;
int numbercible;
int p;

while(p==0){
	printf("Choisissez un nombre:");
	scanf("%d", &numbercible);
	if (numbercible<random_number){
		printf("C'est plus!\n");
		p=0;}
	else if (numbercible>random_number){
		printf("C'est moins!\n");
		p=0;}
	else {
		printf("Vous avez trouvez! Félicitation!!!\n");
		p=1;}}
exit(0);
}
