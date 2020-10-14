#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int if4()
{
	char* locale = setlocale(LC_ALL, "");

	int age;
	char ch;

	if (scanf("%d%c", &age, &ch) != 2 || ch != '\n')
		printf("Du har inte angett ett heltal\n");
	else 
		if (age < 18)
			printf("Du är ej myndig.");
		else if (age > 65)
			printf("Du är pensionär.");

	return 0;
}