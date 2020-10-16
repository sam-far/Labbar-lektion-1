#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int arr3()
{
	char* locale = setlocale(LC_ALL, "");

	int arr[5] = {1,1,2,2,2};

	for (int i = 0; i < 5; i++)
		if (arr[i] % 2 != 0)
			arr[i] = 0;

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);


	return 0;
}