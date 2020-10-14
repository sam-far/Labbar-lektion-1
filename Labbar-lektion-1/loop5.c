#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int main()
{
	char* locale = setlocale(LC_ALL, "");

	int tal;

	GetInputInt("Mata in ett tal: ", &tal);

	for (int i = 1; i <= tal; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}