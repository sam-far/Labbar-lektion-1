#include <stdio.h>
#include "safeinput.h"

int l12()
{
	float celcius, fahrenheit;
	GetInputFloat("Add temperature in celcius: ", &celcius);
	fahrenheit = celcius * 9/5 + 32;
	printf("%.2f degrees celcius is %.2f degrees fahrenheit", celcius, fahrenheit);
	return 0;
}