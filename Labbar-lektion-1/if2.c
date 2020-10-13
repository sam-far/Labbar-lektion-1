#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int if2()
{
	char* locale = setlocale(LC_ALL, "");

	int tal;
	GetInputInt("Hur många paket mjölk finns det kvar: ", &tal);
	if (tal < 10)
	{
		printf("Beställ 30 paket.");
	}
	else if (tal >= 10 && tal <= 20)
	{
		printf("Beställ 20 paket.");
	}
	else
	{
		printf("Du behöver inte ställa någon mjölk");
	}
	return 0;
}