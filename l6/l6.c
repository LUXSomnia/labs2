#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int x;
	puts("������� x");
	scanf("%d", &x);
	int result = 2023 - x;
	if ((result % 10 == 1) && result / 10 % 10 != 1) printf("%d ���", result);
	if (((result%10) < 5) && ((result % 10) > 1) && (((result / 10) % 10 )!= 1)) printf("%d ����", result);
	if ((result%10 >=5) || (result%10==0) || (result/10%10==1)) printf("%d ���", result);

}

void task1()
{
	//x = 4 -> f(x)= 0.1; x = -2 -> f(x)=0
	setlocale(LC_ALL, "RUS");
	int x;
	float f;
	puts("������� x");
	scanf("%d", &x);
	/*f = x<=1 ? printf("F(x) = 0") : printf("F(x) = %.2f", (1 / (x + 6.)));*/
	printf("F(x) = %g", x <= 1 ? 0 : (1 / (x + 6.)));

	int yeas;
	puts("������� ���:");
	scanf("%d", &yeas);
	int ost = yeas % 4;
	if ((ost == 0 && (yeas % 100 != 0)) || (yeas % 400 == 0)) printf("��� %d - ����������", yeas);
	else printf("��� %d - �� ����������", yeas);
}