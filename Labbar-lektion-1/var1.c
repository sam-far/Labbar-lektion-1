#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"

int var1()
{
	char name[100];
	GetInput("Add your name: ", &name, sizeof(name));

	printf("Hello %s", name);
}