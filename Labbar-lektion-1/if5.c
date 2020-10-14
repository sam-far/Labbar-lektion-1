#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"


int if5()
{
	char* locale = setlocale(LC_ALL, "");

	char category[50];
	
	GetInput("Which category are you? Adult, senior or student: ", &category, sizeof(category));

	for (int i = 0; i < category[i]; i++)
		category[i] = tolower(category[i]);
	
	if ((strcmp(category, "student") == 0) || (strcmp(category, "senior") == 0))
		printf("Your travel costs 20 kr.\n");
	else if (strcmp(category, "adult") == 0)
		printf("Your travel costs 30 kr.\n");
	else
		printf("You have entered in a wrong category.\n");

	return 0;
}