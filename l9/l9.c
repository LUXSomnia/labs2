#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define ROW 20
#define COL 20

void main()
{
	printf("\n");
	for (int y = 1; y <= ROW; ++y)
	{
		for (int x = 1; x <= y; x++) {

			printf("%5d", 5);
			if (x==y)
			printf("\n");
		}
	}
	system("pause");
}