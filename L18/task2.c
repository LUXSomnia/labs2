#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>

time_t t;
//struct tm {
//    int tm_sec;     /* секунды - [0,59] */
//    int tm_min;     /* минуты - [0,59] */
//    int tm_hour;    /* часы - [0,23] */
//    int tm_mday;    /* день - [1,31] */
//    int tm_mon;     /* мес€ц - [0,11] */
//    int tm_year;    /* год от 1900 */
//    int tm_wday;    /* день недели с воскресень€ - [0,6] */
//    int tm_yday;    /* номер дн€ с 1 €нвар€ - [0,365] */
//    int tm_isdst;   /* флаг летнего времени устанавливаетс€ >0, если <=0, то информаци€ недоступна*/
//};
struct tm* mytime;

void task2()
{
    setlocale(LC_ALL, "RUS");
    t = time(NULL);
    mytime = localtime(&t);
    printf("ћосковское врем€ %02d:%02d:%02d \n",
       mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
    printf("—егодн€ %d-й день %d года\n",
        mytime->tm_yday , (mytime->tm_year+1900));
}