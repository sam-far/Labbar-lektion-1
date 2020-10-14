#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int loop4()
{
	char* locale = setlocale(LC_ALL, "");

	int tal, summan = 0;

	for (int i = 0; i < 10; i++)
	{
		GetInputInt("Tal: ", &tal);
		summan = summan + tal;
	}

	printf("Summan av det du matat in är: %d", summan);

	return 0;
}