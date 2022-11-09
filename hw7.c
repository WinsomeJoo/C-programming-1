#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ",arr1[i]);
	}
	printf("\n");

	printf("arr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("\n");
	printf("after swap\n");

	printf("arr1: ");
	int* fptr = &arr1[0];
	int* bptr = &arr1[5];
	int temp = 0;
	
	for (int i = 0; i < 3; i++) {
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++;
		bptr--;
	}

	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\n");


	printf("arr2: ");
	int* fptr2 = &arr1[0];
	int* bptr2 = &arr1[5];
	int temp2 = 0;

	for (int i = 0; i < 3; i++) {
		temp = *fptr2;
		*fptr2 = *bptr2;
		*bptr2 = temp2;
		fptr2++;
		bptr2--;
	}

	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);









}