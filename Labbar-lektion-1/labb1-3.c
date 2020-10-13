#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"

int main()
{
	int val1;
	long val2;
	char val3;
	float val4;
	double val5;

	scanf("%d %ld %c %f %lf", &val1, &val2, &val3, &val4, &val5);

	printf("%d\n", val1);
	printf("%ld\n", val2);
	printf("%c\n", val3);
	printf("%.3f\n", val4);
	printf("%.9lf\n", val5);

	return 0;
}