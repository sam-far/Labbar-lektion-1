#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int arr2()
{
	char* locale = setlocale(LC_ALL, "");

	int arr[4], tal, antal;
	int big = arr[0];

	GetInputInt("Hur många tal vill du mata in? ", &antal);

	for (int i = 0; i < antal; i++)
	{
		GetInputInt("Mata in ett tal: ", &tal);
		arr[i] = tal;
	}
	for (int i = 0; i < antal; i++)
	{
		if (big < arr[i])
			big = arr[i];
	}

	printf("Största talet är: %d", big);

	return 0;
}