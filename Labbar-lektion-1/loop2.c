#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"

int loop2()
{
	int tal1, tal2;

	GetInputInt("tal1: ", &tal1);
	GetInputInt("tal2: ", &tal2);

	for (int i = tal1; i <= tal2; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}