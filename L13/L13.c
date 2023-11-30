#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>
#include <Windows.h>



void main() {
	setlocale(LC_ALL, "RUS");
	char name[50];
	char snew[100] = "Добрый день, я ";
	printf("Введите ваше имя: ");
	scanf("%s", name);
	for (int i = 0; i < strlen(name); i++)
	{
		name[i] = toupper(name[i]);
	}
	

	strcat(snew, name);
	

	for (int i = strlen(snew); i < 35; i++)
	{
		strcat(snew, "!");
	}
	puts(snew);

	for (int i = 0; i < strlen(snew); i++)
	{
		if (snew[i] == ' ') snew[i] = '_';
	}
	puts(snew);
}
