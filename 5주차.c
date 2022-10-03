#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	int i, count = 0;
	printf("Please enter a number:");
	scanf("%d", &i);
		
	for (int j = 2; j <= i; j++)
	{
		if (i % j == 0)
		{
			count++;
		}
	}
	if (count == 1)
		printf("it is a prime number.\n");
	else
		printf("it is not a prime number.\n");

}
