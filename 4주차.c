#include <stdio.h>

int main()
{
	
	
	int i;
	int j;
	int k;

	for (i = 0; i < 5; i++)
	{
		for (j = i; j <= 5 - 1; j++) {
			printf(" ");
		}
		for (k = 0; k <= (i * 2); k++) {
			printf("*");
		}
		printf("\n");
	}


		
}


