#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define N 100

//int* full_el(int* Array, int n);
//int max_el(int* Array, int n, int* k);
//int put_el(int* Array, int n);
//
//void hw()
//{
//	setlocale(LC_ALL, "RUS");
//	int Array[N];
//	int n;
//	int k;
//	srand(6);
//	printf("Ввод размера массива:");
//	scanf("%d", &n);
//
//	printf("\nВвод эл. массива\n");
//	full_el(Array, n);
//	printf("\nВывод эл. массива\n");
//	put_el(Array, n);
//
//	printf("Ввод позиции K:");
//	scanf("%d", &k);
//	printf("\nВывод максимального эл. в промежутке от 0-эл. до K-эл.\n");
//	max_el(Array, n, k);
//
//}
//
//int* full_el(int* Array, int n)
//{
//	int i;
//	for (int i = 0; i < n; i++)
//	{
//		Array[i] = rand()%RAND_MAX;
//	}
//}
//
//int put_el(int* Array, int n)
//{
//	int i;
//	for (i = 0; i < n; i++) {
//		printf("%17d \n", Array[i]);
//	}
//}
//
//int max_el(int* Array, int n, int* k)
//{
//	int i;
//	int max=0;
//	for (i = 0; i <= k+1; i++) {
//		if (Array[i] > max) max = Array[i];
//	}
//	printf("%d", max);
//}