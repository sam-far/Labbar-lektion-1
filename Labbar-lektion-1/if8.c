#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int if8()
{
	char* locale = setlocale(LC_ALL, "");
	
	char country[50];

	GetInput("Vilket land bor du i: ", &country, sizeof(country));
	
	for (int i = 0; i < country[i]; i++)
		country[i] = tolower(country[i]);

	if ((strcmp(country, "sverige") == 0) || (strcmp(country, "danmark") == 0) || (strcmp(country, "norge") == 0))
		printf("Du bor i Skandinavien.\n");
	else
		printf("Du bor inte i Skandinavien.\n");

	return 0;
}