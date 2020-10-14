#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int if3()
{
	char* locale = setlocale(LC_ALL, "");

	float tal;
	GetInputFloat("Mata in temperaturen tagen från en febertermometer: ", &tal);
	if (tal > 37.8 && tal <= 39.5)
		printf("Du har feber.");
	else if (tal > 39.5)
		printf("Du bör uppsöka läkare");
	else if (tal < 37.8)
		printf("Du har inte feber");

	return 0;
}