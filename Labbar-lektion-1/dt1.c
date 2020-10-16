#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include "safeinput.h"

int dt1()
{
    char* locale = setlocale(LC_ALL, "");

    SYSTEMTIME t;
    GetLocalTime(&t);
    printf("%d-%d-%d %d:%d:%d\n", t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute, t.wSecond);
    printf("%d-%d-%d\n", t.wYear, t.wMonth, t.wDay);

    return 0;
}