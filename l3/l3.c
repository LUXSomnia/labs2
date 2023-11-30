#include <stdio.h>
#include <locale.h>
#define D       1.852
#define M       7.468

void main()
{
	setlocale(LC_ALL, "RUS");
	/*int num;
	puts("Введите число");
	scanf("%d", &num);
	puts("Введено число %d", num);*/

	int dym;
	float result;
	float res2;
	puts("Введите мили");
	scanf("%d", &dym);
	result = D * dym;
	res2 = M * dym; 
	printf("%d морских миль – это %.1f км \n%d старорусских миль - это %.1f км", dym, result, dym, res2);

}
