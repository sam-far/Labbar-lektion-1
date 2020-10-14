#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int if6()
{
	char* locale = setlocale(LC_ALL, "");

	int tal;

	GetInputInt("Mata in ditt födelseår: ", &tal);

	if (tal >= 1980 && tal < 1990)
		printf("Du är född på 1980-talet.");
	else if (tal < 2000 && tal >= 1990)
		printf("Du är född på 1990-talet.");
	else if (tal < 1980 || tal >= 2000)
		printf("Du är inte född på 1990 eller 1980-talet");

	return 0;
}