#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int self(int n)
{
	if (n == 0 || n == 1)
		printf("%d",n);
	else {
		self(n / 2);
		printf("%d", n % 2);
	}
}

int main()
{
	int number;
	printf("Please enter a number:");
	scanf("%d", &number);

	self(number);


	

}