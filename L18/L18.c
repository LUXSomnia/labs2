#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

struct point {
	float x;
	float y;
	char name;
};
typedef struct point Point;
void put_point(Point a);
float dist(Point z, Point w);
Point mid(Point z, Point w);
int plosk(Point z, Point w);

void task1()
{
	setlocale(LC_ALL, "RUS");
	Point b, a;
	a = (Point){ 1.f,2.f,'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	
	mid(a, b);
	put_point(a);
	put_point(b);
	put_point(mid(a,b));
	printf("\n%.2f\n",dist(a, b));
	printf("\nТочка относится к %d-й координатной четверти",chet(a));
	printf("\nТочка относится к %d-й координатной четверти", chet(b));
	if (plosk(a,b)==1)
		printf("\nТочки относятся к одной координатной плоскости");
	else
		printf("\nТочки не относятся к одной координатной плоскости");
}

void put_point(Point z) {
	printf("point %c (%.1f, %.1f)\n", z.name, z.x, z.y);
}
float dist(Point z, Point w)
{
	float res;
	res = pow(pow(w.x - z.x, 2) + pow(w.y - z.y, 2), 1. / 2);
	return res;
}
Point mid(Point z, Point w)
{
	Point m;
	m.name = 'M';
	float x, y;
	x = (z.x + w.x) / 2.;
	y = (z.y + w.y) / 2.;
	m.x = x; m.y = y;
	return m;
}
int chet(Point z)
{
	float x = z.x, y = z.y;
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
	else return 0;
}

int plosk(Point z, Point w)
{
	if (z.x * z.y > 0 && w.x * w.y > 0 &&
		(z.x * w.x > 0 & z.x * w.y > 0 & z.y * w.x > 0 & z.y * w.y > 0)) return 1;
	else return 0;
}