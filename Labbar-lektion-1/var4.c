#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int var4()
{
	char* locale = setlocale(LC_ALL, "");

	int val1, val2;
	GetInputInt("Tal 1: ", &val1);
	GetInputInt("Tal 2: ", &val2);

	printf("Summan av Tal 1 och Tal 2 är: %d", val1 + val2);
	return 0;
}