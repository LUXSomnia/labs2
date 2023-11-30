#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>

double f2(double x);
double f1(double x);

void task2()
{
	setlocale(LC_ALL, "RUS");
	double f;
	int v;
	int kp = 0;
	int km = 0;
	double summ = 0;
	double sump = 0;
	double start = 2;
	double end = 4;
	/*double step = (end - start) / 100;*/
	double step;
	puts("Введите s");
	scanf("%l", &step);
	getchar();
	char fname[20] = "temp.txt";
	puts("ВЫБЕРИТЕ СПОСОБ ВВОДА: 1 - запись в новый файл, 2 - добавление в существующий");
	scanf("%d", &v);
	FILE* out;
	if (v == 1) {
		if ((out = fopen(fname, "wt")) == NULL)
		{
			printf("Ошибка открытия файла для записи");
			return 0;
		}
	}
	else {
		if ((out = fopen(fname, "a")) == NULL)
		{
			printf("Ошибка открытия файла для записи");
			return 0;
		}
	}
	fprintf(out,"_____________________________________________________________________\n");
	fprintf(out,"|   x   |   f    |   f1   |   f2   |  f1*f2   |f1^2-f2^2 | (f1+f2)*2|\n");
	fprintf(out,"---------------------------------------------------------------------\n");

	
	for (double x = 2; x <= 4; x += step)
	{

		f = pow(2, x) - 2 * pow(x, 2) - 1;
		if (f >= 0) {
			sump = sump + f;
			kp = kp + 1;
		}
		else {
			summ = summ + f;
			km = km + 1;
		}
		fprintf(out,"| %-5.2lf | %-6.2lf | %-6.2lf | %-6.2lf |  %-7.2lf |  %-7.2lf |  %-7.2lf |\n", x, f, f1(x), f2(x), (f1(x) * f2(x)), (pow(f1(x), 2) - pow(f2(x), 2)), 2 * (f1(x) + f2(x)));
	}
	fprintf(out,"---------------------------------------------------------------------\n");

	fprintf(out,"%lf %lf %d %d\n", sump, summ, kp, km);
	fclose(out);
}

double f1(double x)
{
	double y;
	if (x <= 3) y = pow(x, 2) - 3 * x + 9;
	else y = 1 / (pow(x, 3) + 3);
	return y;
}
double f2(double x)
{
	double y2;
	y2 = x * exp(sin(pow(x, 2)));
	return y2;
}