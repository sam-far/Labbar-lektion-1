#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int if9()
{
	char* locale = setlocale(LC_ALL, "");

	char car[50];

	GetInput("Mata in bilm�rke: ", &car, sizeof(car));

	for (int i = 0; i < car[i]; i++)
		car[i] = tolower(car[i]);

	if (!strcmp(car, "volvo") == 0)
		if ((strcmp(car, "volkswagen") == 0) || (strcmp(car, "bmw") == 0) || (strcmp(car, "audi") == 0))
			printf("Bilen �r tysk.");
		else if ((strcmp(car, "renault") == 0) || (strcmp(car, "peugeot") == 0) || (strcmp(car, "citroen") == 0))
			printf("Bilen �r fransk.");
		else
			printf("Bilen �r inte tysk eller fransk.");

	return 0;
}