#include <stdio.h>
#include <math.h>
#include <string.h>
#define SIZE 20



int main()
{
	char palavra1[SIZE], palavra2[SIZE], palavra3[SIZE], caracter;
	int i=0;

	printf("Digite o desejado: ");
	scanf("%20[^\n]", palavra1);

	strcpy (palavra2, palavra1);

	printf("Complete: ");
	scanf("%20[^\n]", palavra3);

	strcat(palavra2, palavra3);

	printf("\n---- %s -----", palavra2);
	return 0;
}