#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>

time_t t;
//struct tm {
//    int tm_sec;     /* ������� - [0,59] */
//    int tm_min;     /* ������ - [0,59] */
//    int tm_hour;    /* ���� - [0,23] */
//    int tm_mday;    /* ���� - [1,31] */
//    int tm_mon;     /* ����� - [0,11] */
//    int tm_year;    /* ��� �� 1900 */
//    int tm_wday;    /* ���� ������ � ����������� - [0,6] */
//    int tm_yday;    /* ����� ��� � 1 ������ - [0,365] */
//    int tm_isdst;   /* ���� ������� ������� ��������������� >0, ���� <=0, �� ���������� ����������*/
//};
struct tm* mytime;

void task2()
{
    setlocale(LC_ALL, "RUS");
    t = time(NULL);
    mytime = localtime(&t);
    printf("���������� ����� %02d:%02d:%02d \n",
       mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
    printf("������� %d-� ���� %d ����\n",
        mytime->tm_yday , (mytime->tm_year+1900));
}