#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>

#define SIZE 8

typedef struct {
	char name[50];
	char ganre[50];
	int day;
	int month;
	int year;
	int min;
	int hour;
	int budg;
	int prod;
} kinoseans;

int writefile (char *fname, kinoseans* kino)