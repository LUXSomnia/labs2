#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>

void task1()
{
	setlocale(LC_ALL, "RUS");
	int* pi, i = 5;
	float* pf, f = 0.1f;
	printf("%d\n", sizeof(pf));
	printf("%d\n", sizeof(pi));

	float PI = 3.14159, *p1, * p2;
	p1 = p2 = &PI;
	printf("По адресу p1=%x хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%x хранится *p2=%g\n", p2, *p2);
}