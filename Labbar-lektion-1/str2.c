#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"

int str2()
{
	char* locale = setlocale(LC_ALL, "");

    char name[] = "Hello, World";
    char pos = 'H';

    for (int i = 0; name[i] != '\0'; i++)
        if (pos == name[i])
            printf("Strängen H har position %d", i);
    
    return 0;
}