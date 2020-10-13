#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"

int var7()
{
	float summa;
	GetInputFloat("Mata in en summa: ", &summa);
	printf("Nya summan: %.2f", (summa * 0.25) + summa);
	return 0;
}