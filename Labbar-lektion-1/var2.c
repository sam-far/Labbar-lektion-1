#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "safeinput.h"

int var2()
{
	char* locale = setlocale(LC_ALL, "");
	char name[] = "Sam Ashkan Far";
	int age = 39;
	printf("Jag heter %s och är %d år", &name, age);
	return 0;
}