#include <stdio.h>
#include <math.h>

void main()
{
	
	char name[50];
	float weight, height, bmi;
	printf("Thats definitively the first phrase I wrote in C\n");
	printf("\n");
	
	printf("Tell me your name: ");
	scanf("%s", &name);
	
	
	printf("\n Thanks mr(s)%s, now your name is registered in the F.I.B. database\n");
	
	printf("\nHmm and now I need your weight:");
	scanf("%f", &weight);
	
	printf("How about your height too:");
	scanf("%f", &height);
	
	bmi = weight / height;
	
	printf("\n\n According with our super processors your BMI is ---> %.2f", bmi);
	printf(" <---");
}