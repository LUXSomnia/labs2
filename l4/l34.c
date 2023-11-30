#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	int i = 5;
	double d = 54.4554;
	float f = 65.453;
	char c = 'h';

	puts("1¬ведите int");
	scanf("%d", &i);
	printf("¬ведено %d\n", i);
	getchar();

	puts("¬ведите float");
	scanf("%f", &f);
	printf("¬ведено %f\n", f);
	getchar();


	puts("¬ведите double");
	scanf("%lf", &d);
	printf("¬ведено %lf\n", d);
	getchar();

	puts("¬ведите char");
	scanf("%c", &c);
	printf("¬ведено %c\n", c);
	getchar();
	printf("%d %f %lf %c\n", i, f, d, c);

	printf("%i %g \n", (int)f, f - (int)f);
	printf("%i - дес€тичный , %x - шестнадцатеричный код\n", c, c);
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