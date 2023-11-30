#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define N 500
#define XMIN 0
#define XMAX 345

double* full_elements(double* array, int n); 
//���������� ������� ���������� ����������
int put_elements(double* array, int n); 
//������ ��������� �������
double* calc_elements(double* array, int k); 
//��������� ��������� �������(��.���.�������  ���. 1.3 � ������ 11)
double sum_elements(double* array, int begin, int end);
int find_element(double* array, int n, double element);
double* calc_elements(double* array, int* k, int n);
double max_el(double* array, int* k);

void task1()
{
	setlocale(LC_ALL, "RUS");
	double array[N];
	int begin, end;
	double element;
	int n;
	int k;
	srand(6);
	printf("���� ������� �������:");
	scanf("%d", &n);

	printf("\n���� ��. �������\n");
	full_elements(array, n);
	printf("\n����� ��. �������\n");
	put_elements(array, n);
	printf("\n���� ��������, �� �������� ���������� �����:\n");
	scanf("%lf", &element);
	if (find_element(array, n, element)!=-1) 
		printf("��������� ������� ��������� �� %d �������\n", find_element(array, n, element));
	else
		printf("������� �� ������\n");

	printf("���� ������� K:");
	scanf("%d", &k);
	printf("\n����� ������������� ��. � ���������� �� 0-��. �� K-��.\n");
	calc_elements(array, k, n);
	max_el(array, k);
	 
}

double* full_elements(double* array, int n)
{
	int i;
	double temp;
	for (int i = 0; i < n; i++)
	{
		printf("array[%d] = ", i + 1);
		scanf("%lf", &temp);
		array[i] = temp;
	}
}

int put_elements(double* array, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("%17.3lf \n", array[i]);
	}
}

double sum_elements(double* array, int begin, int end) {
	double sum = 0.;
	for (begin = 0; begin <=end; begin++) {
		sum += array[begin];
	}
	return sum;
}
int find_element(double* array, int n, double element)
{
	int ind=0;
	for (int i= 0; i< n; i++) {
		if (array[i] == element) ind = i;
	}
	if (ind == 0)
		return -1;
	else
		return ind+1;
}

double* calc_elements(double* array, int* k, int n)
{
	
	int pfirst = 0,pi=0;
	int plast = 0;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0 && pfirst == 0) pfirst = i;
		if (array[i] > 0 && pfirst != 0) plast = i;
	}
	pi = pfirst; 
	if ((plast - pi) == 1) sum = 0;
	else 
		for (pfirst; pfirst < plast; pfirst++)
		{
			sum += array[pfirst];
		}
	printf("����� = %.3lf\n", sum);
}
double max_el(double* array, int* k)
{
	int i;
	double max = 0;
	for (i = 0; i <= k; i++) {
		if (array[i] > max) max = array[i];
	}
	printf("%.2lf\n", max);
}
