
#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	/*double x = 0.4 * pow(10, 4);
	double y = -0.875;
	double z = -0.475 * pow(10,-3);
	double result = pow(fabs(cos(x) - cos(y)), 1 + 2 * pow(sin(y), 2)) * (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
	printf("Результат: %.4f\n", result);*/


	//F(2e-4, -0.003)=-4.066
/*
  * fabs(x)=0.000200
  * pow(fabs(x), 1. / 2)=0.014142
  * res1 = y - pow(fabs(x), 1. / 2)= -0.017142
  * res2 = x - y / (1 + (pow(x, 2) / 2))= 0,0032;
  res = res1 * res2 = -0.000055;
  log(res);
  */
		//x = 2e-4   y = -0.003
		double x;
		puts("Введите x");
		scanf("%lg\n", &x);
		double y;
		puts("Введите y");
		scanf("%lf\n", &y);
		double res1, res2;
		res1 = y - (sqrt(fabs(x)));
		res2 = x - (y / (1 + (pow(x,2)/2)));
		printf("%.3lg\n", (log(res1 * res2)));
	
}
task1()
{
	double x;
	int t = 6;
	setlocale(LC_ALL, "RUS");
	puts("Введите x");
	scanf("%lf\n", &x);

	printf("Ответ: %lf", pow(fabs(log(x) - (sqrt(pow(x, 2) + pow(t, 2)) * x)), 1 / 5.));

	double gr;
	setlocale(LC_ALL, "RUS");
	puts("Введите gr");
	scanf("%lf\n", &gr);

	printf("Ответ: %.6f", sin(gr * M_PI / 180));
}