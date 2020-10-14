#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int loop3()
{
	char* locale = setlocale(LC_ALL, "");

	int tal1, tal2;
	char yes;

	while (1)
	{
		GetInputInt("Mata in tal1: ", &tal1);
		GetInputInt("Mata in tal2: ", &tal2);

		printf("Summan av talen är: %d\n", tal1 + tal2);

		GetInputChar("Vill du fortsätta(j/n)? ", &yes);
		if (yes == 'j')
			continue;
		else if (yes == 'n')
			break;
		else
		{
			printf("Du angav fel tecken!\n");
		}
	}

	return 0;
}