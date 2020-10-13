#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"

int l15()
{
	int val, val2;

	const char* strings[] = { "","one","two","three","four","five","six","seven","eight","nine" };
	
	GetInputInt("Add number: ", &val);
	GetInputInt("Add number 2: ", &val2);

	for (int i = val; i <= val2; i++)
	{
		if (i > 1 || i < 9)
		{
			printf("%s\n", strings[i]);
		}
		if (i >= 9) {
			break;
		}
	}

	for (int y = val; y <= val2; y++)
	{
		if (y % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
		if (y >= 9) {
			break;
		}
	}
	return 0;
}