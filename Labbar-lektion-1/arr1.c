#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int arr1()
{
	char* locale = setlocale(LC_ALL, "");

	int arr[4], tal;
	int big = arr[0];

	for (int i = 0; i < 4; i++)
	{
		GetInputInt("Mata in ett tal: ", &tal);
		arr[i] = tal;
	}
	for (int i = 0; i < 4; i++)
	{
		if (big < arr[i])
			big = arr[i];
	}

	printf("Största talet är: %d", big);

	return 0;
}