#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int if2()
{
	char* locale = setlocale(LC_ALL, "");

	int tal;
	GetInputInt("Hur m�nga paket mj�lk finns det kvar: ", &tal);
	if (tal < 10)
	{
		printf("Best�ll 30 paket.");
	}
	else if (tal >= 10 && tal <= 20)
	{
		printf("Best�ll 20 paket.");
	}
	else
	{
		printf("Du beh�ver inte st�lla n�gon mj�lk");
	}
	return 0;
}