#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double km = 0.0, mile;
	
	printf("plese enter kilometers:");
	scanf("%lf", &km);
	
	mile = km / 1.609;

	printf("%.1f km is equl to %.1f miles\n", km, mile);

}

