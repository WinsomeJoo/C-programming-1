#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void average(int* arr1,int len) {
	int sum = 0;
	float sum2=0;
	float average = 0;

	for (int i = 0; i < len; i++) {
		sum += arr1[i];
	}
	average = (float)sum / len;
	
	// 편차구한 후 표준 편차 
	int arr2[5];
	double b;
	for (int i = 0; i < len; i++) {
		arr2[i] = average - arr1[i];
	}
	
	for (int i = 0; i<len; i++) {
		sum2 += pow(arr2[i], 2);
	}
	double sqrt(sum2);

	printf("%f", sum2);
	
}


int main()
{	
	int arr[5];
	printf("Enter 5 real number:");

	
	for (int i=0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	
	average(arr,sizeof(arr)/sizeof(int));

	

}