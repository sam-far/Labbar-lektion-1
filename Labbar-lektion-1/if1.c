#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int if1()
{
	char* locale = setlocale(LC_ALL, "");

	int tal;
	GetInputInt("Mata in ett tal: ", &tal);

	tal = tal > 10 ? printf("Talet �r st�rre �n 10") : printf("Talet �r mindre �n 10");

}