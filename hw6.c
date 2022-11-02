#include<stdio.h>

void Print_odd(int* ptr, int len);
void Print_even(int* ptr, int len);

int main(void)
{
	int arr[5];
	int i;

	printf("Please input five integer:");

	for (i = 0; i < 5; i++)
	{
		scanf_s(" %d", &arr[i]);
	}

	Print_odd(arr, sizeof(arr) / sizeof(int));
	Print_even(arr, sizeof(arr) / sizeof(int));

	return 0;
}

void Print_odd(int* arr, int len)
{
	int i;

	printf("Odd numbers: ");

	for (i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);
	}
	printf("\n");

}

void Print_even(int* arr, int len)
{
	int i;

	printf("Even numbers: ");

	for (i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	printf("\n");
}