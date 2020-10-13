#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"

int l14()
{
	int val;

	GetInputInt("Enter value: ", &val);

	if (val == 1)
	{	
		printf("One");
	}
	else if (val == 2) 
	{
		printf("Two");
	}
	else if (val == 3) 
	{
		printf("Three");
	}
	else if (val == 4)
	{
		printf("Four");
	}
	else if (val == 5)
	{
		printf("Five");
	}
	else if (val == 6)
	{
		printf("Six");
	}
	else if (val == 7)
	{
		printf("Seven");
	}
	else if (val == 8)
	{
		printf("Eight");
	}
	else if (val == 9)
	{
		printf("Nine");
	}
	else if (val > 9)
	{
		printf("Greater than 9");
	}
	else 
	{
		printf("The number is to low");
	}
	return 0;
}