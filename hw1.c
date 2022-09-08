#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	printf("Input two integer: ");
	scanf("%d %d",&a,&b);

	printf("%d & %d=%d\n", a, b, a & b);
	printf("%d | %d=%d\n", a, b, a | b);
	printf("%d ^ %d=%d\n", a, b, a ^ b);

	
}

