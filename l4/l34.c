#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	int i = 5;
	double d = 54.4554;
	float f = 65.453;
	char c = 'h';

	puts("1������� int");
	scanf("%d", &i);
	printf("������� %d\n", i);
	getchar();

	puts("������� float");
	scanf("%f", &f);
	printf("������� %f\n", f);
	getchar();


	puts("������� double");
	scanf("%lf", &d);
	printf("������� %lf\n", d);
	getchar();

	puts("������� char");
	scanf("%c", &c);
	printf("������� %c\n", c);
	getchar();
	printf("%d %f %lf %c\n", i, f, d, c);

	printf("%i %g \n", (int)f, f - (int)f);
	printf("%i - ���������� , %x - ����������������� ���\n", c, c);
	printf("%g", 1. / i);
}

void main2()
{
	setlocale(LC_ALL, "RUS");

	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;

	printf("x = %d \ny = %f \nz = %lf \n", ((int)x), ((float)y), ((double)z));
}