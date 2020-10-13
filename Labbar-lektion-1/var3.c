#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int var3()
{
	char* locale = setlocale(LC_ALL, "");
	
	char firstName[50];
	char lastName[50];

	GetInput("Skriv in ditt förnamn: ", &firstName, sizeof(firstName));
	GetInput("Skriv in ditt efternamn: ", &lastName, sizeof(lastName));

	printf("Du heter: %s, %s", firstName, lastName);

	return 0;
}