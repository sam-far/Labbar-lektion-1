#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int if10()
{
	char* locale = setlocale(LC_ALL, "");

	int summan;
	char rabatt[3];

	GetInputInt("Mata in en summa: ", &summan);
	GetInput("Har du rabatt? Ja/Nej: ", &rabatt, sizeof(rabatt));

	for (int i = 0; i < rabatt[i]; i++)
		rabatt[i] = tolower(rabatt[i]);

	if ((summan >= 15 && summan <= 25) && (!strcmp(rabatt, "ja") == 0))
		printf("Du kan köpa en liten hamburgare.\n");
	else if ((summan >= 15 && summan <= 25) && (strcmp(rabatt, "ja") == 0))
		printf("Du kan köpa en liten hamburgare och en pommes frites.\n");
	else if ((summan > 25 && summan <= 50) && (!strcmp(rabatt, "ja") == 0))
		printf("Du kan köpa en stor hamburgare.\n");
	else if ((summan > 25 && summan <= 50) && (strcmp(rabatt, "ja") == 0))
		printf("Du kan köpa en stor hamburgare och pommes frites.\n");
	else if ((summan > 60 || summan == 50 || summan == 60) && (strcmp(rabatt, "ja") == 0))
		printf("Du kan köpa ett meal med dryck.\n");

	return 0;
}