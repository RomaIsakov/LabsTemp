#include "lab2.h"
#include <math.h>
#include <stdio.h>

// Задача 1 - Чётное или нечётное
int is_even(int n) {
    return n % 2 == 0;
}

// Задача 2 - Максимум из трёх чисел
int max_of_three(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Задача 3 - Знак числа
int sign_of_number(int n) {
    if (n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
    
}

// Задача 4 - Абсолютное значение
int absolute_value(int n) {
    if (n < 0) return -1 * n;
    else return n;
}

// Задача 5 - Треугольник существует
int triangle_exists(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) return 1;
    else return 0;
}

// Задача 6 - Класс оценок
const char* get_grade(int score) {
    if (score >= 90 && score <= 100) return"отличн";
    else if (score >= 75 && score <= 89) return "хорошо";
    else if (score >= 60 && score <= 74) return "удовлетворительно";
    else if (score >= 0 && score <= 59) return "неудовлетворительно";
    else return "некорректно";
}

// Задача 7 - Евклидово расстояние
double euclidean_distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Задача 8 - Манхэттенское расстояние
int manhattan_distance(int x1, int y1, int x2, int y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}

// Вспомогательная функция для проверки простоты (можно писать сразу в задаче 9, но это плохой тон)
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Задача 9 - Среднее арифметическое простых чисел в интервале
double average_primes_in_interval(int a, int b) {
    int sum = 0;
    int count = 0;
    
    for (int i = a; i <= b; i+=1) {
        if (is_prime(i)) {
            sum += i;
            count+=1;
        }
    }
    
    if (count == 0) return 0;
    else return sum / count;
}

// Задача 10 - Кратные числа в интервале
int count_multiples(int start, int end, int k) {
    int count = 0;
    for (int i = start; i <= end; i+=1) {
        if (i % k == 0) {
            count+=1;
        }
    }
    return count;
}

// Задача 11 - Високосный год
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return 1;
    else return 0;
}

// Задача 12 - Сезон по номеру месяца
const char* season_by_month(int month)
{
    switch(month) {
        case 12:
        case 1:
        case 2:
            return("Зима\n");
            break;
        case 3:
        case 4:
        case 5:
            return("Весна\n");
            break;
        case 6:
        case 7:
        case 8:
            return("Лето\n");
            break;
        case 9:
        case 10:
        case 11:
            return("Осень\n");
            break;
        default:
            return("Некорректно\n");
    }
    
    return 0;
}

// Задача 13 - День недели
const char* day_of_week(int day_num) {
        switch(day_num) {
        case 1:
            return "понедельник";
            break;
        case 2:
            return "вторник";
            break;
        case 3:
            return "среда";
            break;
        case 4:
            return "четверг";
            break;
        case 5:
            return "пятница";
            break;
        case 6:
            return "суббота";
            break;
        case 7:
            return "воскресенье";
            break;
        default:
            return"некорректно";
    }
}

// Задача 14 - Подсчёт цифр в числе
int count_digits(int n)
{
    if (n<0){
        n = -1*n;
    }
    int count = 0;
    do {
        count++;
        n/=10;
    }
    while (n>0);
    return count;
}

// Задача 15 - Реверс числа
int reverse_number(int n) {
    int reversed = 0;
    do {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    } while (n != 0);
    
    return reversed;
}

