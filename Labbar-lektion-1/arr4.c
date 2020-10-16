#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int arr4()
{
	char* locale = setlocale(LC_ALL, "");
	
	float arr[100];
	int antal;

	GetInputInt("Antal Tal? ", &antal);

	for (int i = 0; i < antal; i++)
		GetInputFloat("Tal: ", &arr[i]);

	for (int i = 0; i < antal; i++)
		printf("%lf\n", arr[i]);	

	return 0;
}