#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>

int task1(void)
{
	char scan[50];
	setlocale(LC_ALL, "RUS");
	char fname[20] = "number.txt";
	FILE* out;
	puts("Создание файла");
	if ((out = fopen(fname, "wt")) == NULL)
	{
		printf("Ошибка открытия файла для записи");
		return 0;
	}
	fprintf(out, "%d\n", 5);
	fclose(out);

	out = fopen("number.txt", "a");
	if (out == NULL) {
		printf("Error opening file.\n");
		return 1;
	}
	fprintf(out, "%.2f", 12.56);
	fclose(out);


	puts("ВВЕДИТЕ ИМЯ ФАЙЛА:");
	scanf("%s", scan);
	FILE* file;
	puts("Создание файла");
	if ((file = fopen(scan, "wt")) == NULL)
	{
		printf("Ошибка открытия файла для записи");
		return 0;
	}
	fprintf(file, "Файл!\n");
	fclose(file);
}