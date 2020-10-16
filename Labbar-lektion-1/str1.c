#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int str1()
{
	char* locale = setlocale(LC_ALL, "");

	char str1[20];
	GetInput("Sträng 1: ", &str1, sizeof(str1));
	char str2[20];
	GetInput("Sträng 2: ", &str2, sizeof(str2));
	char str3[20];
	GetInput("Sträng 3: ", &str3, sizeof(str3));

	printf("%s %s %s", str1, str2, str3);

	return 0;
}