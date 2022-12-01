#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct nation
{
	char Name[20];
	char Country[20];
	int Population;

} nation;


int main()
{
	nation n1, n2,n3;

	printf("Input three city:\n");
	
	printf("Name> ");
	scanf("%s", n1.Name);
	
	printf("Country> ");
	scanf(" %s", n1.Country);
	
	printf("Population> ");
	scanf(" %d", &(n1.Population));



	printf("Name> ");
	scanf(" %s", n2.Name);

	printf("Country> ");
	scanf(" %s", n2.Country);

	printf("Population> ");
	scanf(" %d", &(n2.Population));


	printf("Name> ");
	scanf(" %s", n3.Name);

	printf("Country> ");
	scanf(" %s", n3.Country);

	printf("Population> ");
	scanf(" %d", &(n3.Population));


	printf("Printing the three cities: \n");

	printf("%s in %s with population of %d people\n",n1.Name,n1.Country,n1.Population);
	printf("%s in %s with population of %d people\n",n2.Name,n2.Country,n2.Population);
	printf("%s in %s with population of %d people\n",n3.Name,n3.Country,n3.Population);
	


}