#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int var5()
{
	char* locale = setlocale(LC_ALL, "");

	int todaysDate = 2020;
	int bornDate;

	GetInputInt("Ange ditt f�delse�r: ", &bornDate);

	printf("Din �lder �r: %d", todaysDate - bornDate);

	return 0;
}