#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int main()
{
	char* locale = setlocale(LC_ALL, "");

	float tal = 29.5;
	//GetInputInt("Mata in temperaturen tagen fr�n en febertermometer: ", &tal);
	if (tal > 37.8 && tal <= 39.5)
	{
		printf("Du har feber.");
	}
	else if (tal > 39.5)
	{
		printf("Du b�r upps�ka l�kare");
	}
	else if (tal < 37.8)
	{
		printf("Du har inte feber");
	}
	return 0;
}