#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define SIZE 50
#define N 100

double f1(double x)
{
	double y;
	y = pow(2, x) - 2 * pow(x, 2) - 1;
	return y;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	puts("¬ведите размер массива:");
	scanf("%d", &n);
	float A[SIZE];
	float temp;
	int pfirst = 0;
	int plast = 0;
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
		if (temp > 0 && pfirst == 0) pfirst = i;
		if (temp > 0 && pfirst != 0) plast = i;
	}
	for (pfirst; pfirst < plast; pfirst++)
	{
		sum += A[pfirst];
	}
	
	puts("");
	printf("—умма = %f", sum);
}

void task12()
{
	float A[SIZE];
	float A2[SIZE];
	float A3[N];
	float temp;

	for (int i = 0; i < SIZE; i++)
	{
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
		A2[i] = pow(temp, 2);
	}
	puts("");
	for (int i = 0; i < SIZE; i++)
	{
		A2[i] = pow(A[i], 2);
	}
	puts("__________________________________________");
	puts("| i |   A    |   A2   | —р. арифм A и A2 |");
	puts("------------------------------------------");
	for (int i = 0; i < SIZE; i++)
	{
		printf("| %d | %-6.3f | %-6.3f |      %-6.3f      |\n", i + 1, A[i], A2[i], (A[i] + A2[i]) / 2.);
	}
	puts("------------------------------------------");
	puts("");
	double sump = 0;
	int kp = 0;
	int km = 0;
	double summ = 0;
	double start = 2;
	double end = 4;
	double step = (end - start) / N;
	for (int i = 0; i < N; i++)
	{
		A3[i] = f1(start + i * step);
		if (A3[i] >= 0) {
			sump = sump + A3[i];
			kp = kp + 1;
		}
		else {
			summ = summ + A3[i];
			km = km + 1;
		}
	}
	puts("__________________________________________________");
	printf("|  A3  |");
	if (kp != 0)
		printf(" %f | %f | %d | %d | %-.3f |", sump, summ, kp, km, sump / ((float)kp));
	else
		printf(" %f | %f | %d | %d |  0  |", sump, summ, kp, km, sump / ((float)kp));
}

