#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

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

void main()
{
	setlocale(LC_ALL, "RUS");
	double s;
	double f;
	int kp = 0;
	int km = 0;
	double summ = 0;
	double sump = 0;
	puts("¬ведите s");
	scanf("%lf", &s);
	printf("_____________________________________________________________________\n");
	printf("|   x   |   f    |   f1   |   f2   |  f1*f2   |f1^2-f2^2 | (f1+f2)*2|\n");
	printf("---------------------------------------------------------------------\n");

	double start = 2;
	double end = 4;
	double step = (end - start) / 100;
	for (double x = 2; x <=4; x +=step)
	{
		
		f = pow(2,x) - 2* pow(x,2) - 1;
		if (f >= 0) {
			sump = sump + f;
			kp = kp + 1;
		}
		else {
			summ = summ + f;
			km = km + 1;
		}
		printf("| %-5.2lf | %-6.2lf | %-6.2lf | %-6.2lf |  %-7.2lf |  %-7.2lf |  %-7.2lf |\n", x, f, f1(x), f2(x), (f1(x)*f2(x)), (pow(f1(x),2)-pow(f2(x),2)), 2*(f1(x)+f2(x)));
	}
	printf("---------------------------------------------------------------------\n");

	printf("%lf %lf %d %d", sump, summ, kp, km);
}

//void task1()
//{
//	//setlocale(LC_ALL, "RUS");
//	//int s = 0;
//	//int n, m;
//	//int k = 1;
//	//puts("¬ведите n");
//	//scanf("%d", &n);
//	//puts("¬ведите m");
//	//getchar();
//	//scanf("%d", &m);
//	//for (int i = m; i >= n; i--)
//	//{
//	//	s += i;
//	//	printf("выполнено %d раз\n", k++);
//	//}
//	//printf("результат %d", s);
//
//	///*setlocale(LC_ALL, "RUS");*/
//	//char n;
//	//int r;
//	//scanf("%c", &n);
//	//scanf("%d", &r);
//	//for (int i = 0; i < 1; i++)
//	//	putchar('!');
//	//for (int i = 0; i < r - 2; i++)
//	//	putchar(n);
//	//for (int i = 0; i < 1; i++)
//	//	putchar('!');
//
//	//puts("");
//	//for (int i = 0; i < 6; i++)
//	//{
//	//	putchar(n);
//	//	printf("%43c", ' ');
//	//	putchar(n);
//	//	puts("");
//	//}
//
//	//for (int i = 0; i < 1; i++)
//	//	putchar('!');
//	//for (int i = 0; i < r - 2; i++)
//	//	putchar(n);
//	//for (int i = 0; i < 1; i++)
//	//	putchar('!');
//
//}