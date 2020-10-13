#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int var8()
{
	char* locale = setlocale(LC_ALL, "");

	int minutes;

	GetInputInt("Mata in antal minuter: ", &minutes);

	if (minutes > 60)
	{
		printf("Detta är %d timmar och %d minuter", (minutes/60), (minutes%60));
	}

	return 0;
}