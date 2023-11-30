#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	float R;
	char c;
	puts("¬ведите символ");
	scanf("%c", &c);
	puts("¬ведите значени€ R");
	scanf("%d", &R);
	int a, b, c;
	c = 2 * R;
	puts("¬ведите значени€ a");
	scanf("%d", &a);//высота
	puts("¬ведите значени€ b");
	scanf("%d", &b);
	for (int i =0; i<=a; i++)
	{
		if (i==0) 
	}

}

void task()
{
	int a, n;
	puts("¬ведите значени€ a и n");
	scanf("%d %d", &a, &n);
	double s = 0;
	double p = 1. / a;
	for (int x = 1; x <= n; x++)
	{
		s = s + p;
		p *= p;
	}
	printf("%lf %lf", s, p);
}