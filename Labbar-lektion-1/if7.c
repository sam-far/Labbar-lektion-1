#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "safeinput.h"


int if7()
{
	char* locale = setlocale(LC_ALL, "");

	const char log[] = "Login", pass[] = "Password";
	char login[30], password[30];
	
	GetInput("Login: ", &login, sizeof(login));
	GetInput("Password: ", &password, sizeof(password));

	if ((strcmp(login, log) == 0) && (strcmp(password, pass) == 0))
		printf("Inloggad.\n");
	else
		printf("Fel lösenord eller fel användarnamn.\n");

	return 0;
}