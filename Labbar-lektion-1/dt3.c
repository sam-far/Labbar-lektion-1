#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <locale.h>

typedef struct tm tm;

#define BUF_LEN 256
int dt3()
{
	char buf[BUF_LEN] = { 0 };

	setlocale(LC_TIME, "sv_SE.utf8");

	time_t now = time(NULL);
	struct tm* ptm = localtime(&now);
	strftime(buf, BUF_LEN, "%F", ptm);

	printf("Dagens datum: %s \n", buf);

	return 0;
}