#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int var6()
{
	char* locale = setlocale(LC_ALL, "");

	int tal1, tal2;

	GetInputInt("Mata in tal 1: ", &tal1);
	GetInputInt("Mata in tal 2: ", &tal2);

	int sum = tal1 + tal2;
	int average = (tal1 + tal2) / 2;
	int diff = tal1 > tal2 ? tal1 - tal2 : tal2 - tal1;

	printf("Medelvärde: %d, Summa: %d, Differens: %d", average, sum, diff);

	return 0;
}