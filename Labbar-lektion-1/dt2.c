#include <stdio.h>
#include <windows.h>

int dt2()
{	
	SYSTEMTIME t;

	GetLocalTime(&t);

	printf(
		"year = %d\n"
		"month = %d\n"
		"day = %d\n"
		"hour = %d\n"
		"minute = %d\n"
		"second = %d\n"
		"millisecond = %d\n"
		, t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute, t.wSecond, t.wMilliseconds
	);

	return 0;
}