#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string.h>

struct Movie {
    char title[100];
    int year;
    int month;
    int day;
    int hour;
    int min;
    int duration;
    char genre[20];
    int budget;
};

int main() {
    setlocale(LC_ALL, "RUS");
    struct Movie movies[5];

    strcpy(movies[0].title, "Die_Hard ");
    movies[0].year=2022;
    movies[0].month = 10;
    movies[0].day = 15;
    movies[0].hour = 12;
    movies[0].min = 0;
    movies[0].duration = 120;
    strcpy(movies[0].genre, "Action");
    movies[0].budget = 50000000;

    strcpy(movies[1].title, "The_Dark_Knight");
    movies[1].year = 2022;
    movies[1].month = 10;
    movies[1].day = 15;
    movies[1].hour = 15;
    movies[1].min = 30;
    movies[1].duration = 152;
    strcpy(movies[1].genre, "Action");
    movies[1].budget = 185000000;

    strcpy(movies[2].title, "Mad_Max:_Fury_Road");
    movies[2].year = 2022;
    movies[2].month = 10;
    movies[2].day = 15;
    movies[2].hour = 17;
    movies[2].min = 30;
    movies[2].duration = 120;
    strcpy(movies[2].genre, "Action");
    movies[2].budget = 150000000;

    strcpy(movies[3].title, "The_Shawshank_Redemption");
    movies[3].year = 2022;
    movies[3].month = 10;
    movies[3].day = 15;
    movies[3].hour = 22;
    movies[3].min = 00;
    movies[3].duration = 120;
    movies[3].duration = 142;
    strcpy(movies[3].genre, "Drama");
    movies[3].budget = 25000000;

    strcpy(movies[4].title, "Inception");
    movies[4].year = 2022;
    movies[4].month = 10;
    movies[4].day = 15;
    movies[4].hour = 16;
    movies[4].min = 30;
    movies[4].duration = 120;
    movies[4].duration = 148;
    strcpy(movies[4].genre, "Sci-Fi");
    movies[4].budget = 160000000;

    FILE* out = fopen("movies.txt", "w");
    if (out == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(out, "Имя:%s;Жанр:%s;Дата.%4d.%2d.%2d;Время:%2d:%2d;Длительность:%d;Бюджет:%d\n",
            movies[i].title, movies[i].genre, movies[i].year, movies[i].month,
            movies[i].day,movies[i].hour, movies[i].min, 
            movies[i].duration, movies[i].budget);
    }

    fclose(out);

    out = fopen("movies.txt", "r");
    if (out == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Movies of genre 'Action' showing from 12:00 to 18:00:\n");
    for (int i = 0; i <= 5; i++) {
        fscanf(out, "Имя:%s;Жанр:%20s;Дата:%4d.%2d.%2d;Время:%2d:%2d;Длительность:%d;Бюджет:%d\n",
            movies[i].title, movies[i].genre, movies[i].year, movies[i].month,
            movies[i].day, movies[i].hour, movies[i].min,
            movies[i].duration, movies[i].budget);
        if (strcmp(movies[i].genre, "Action") == 0) {
            if (movies[i].hour >= 12 && movies[i].hour <= 18) {
                printf("Имя:%20s\n", movies[i].title);
                printf("Дата: %4d.%2d.%2d; Время:%2d:%02d\n", 
                    movies[i].year, movies[i].month,
                    movies[i].day,movies[i].hour, movies[i].min);
                printf("Длительность: %d минут\n", movies[i].duration);
                printf("Жанр: %20s\n", movies[i].genre);
                printf("Бюджет: %d\n\n", movies[i].budget);
            }
        }
    }

    fclose(out);

    return 0;
}