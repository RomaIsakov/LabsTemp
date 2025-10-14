#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lab2.h"

// Функция для логирования результатов
void log_result(const char* task, const char* message) {
    printf("[%s] %s\n", task, message);
}

int main() {
    // Задача 1: Чётное или нечётное
    log_result("Задача 1", "Начинаем тестирование");
    assert(is_even(4) == 1);
    assert(is_even(5) == 0);
    assert(is_even(0) == 1);
    assert(is_even(-2) == 1);
    assert(is_even(-3) == 0);
    log_result("Задача 1", "Все тесты пройдены");
    
    // Задача 2: Максимум из трёх чисел
    log_result("Задача 2", "Начинаем тестирование");
    assert(max_of_three(5, 8, 2) == 8);
    assert(max_of_three(1, 2, 3) == 3);
    assert(max_of_three(10, 5, 10) == 10);
    assert(max_of_three(-1, -5, -3) == -1);
    assert(max_of_three(0, 0, 0) == 0);
    log_result("Задача 2", "Все тесты пройдены");
    
    // Задача 3: Знак числа
    log_result("Задача 3", "Начинаем тестирование");
    assert(sign(-3) == -1);
    assert(sign(5) == 1);
    assert(sign(0) == 0);
    assert(sign(100) == 1);
    assert(sign(-100) == -1);
    log_result("Задача 3", "Все тесты пройдены");
    
    // Задача 4: Абсолютное значение
    log_result("Задача 4", "Начинаем тестирование");
    assert(absolute(-7) == 7);
    assert(absolute(7) == 7);
    assert(absolute(0) == 0);
    assert(absolute(-100) == 100);
    assert(absolute(100) == 100);
    log_result("Задача 4", "Все тесты пройдены");
    
    // Задача 5: Треугольник существует
    log_result("Задача 5", "Начинаем тестирование");
    assert(is_triangle(3, 4, 5) == 1);
    assert(is_triangle(3, 2, 5) == 0);
    assert(is_triangle(5, 5, 5) == 1);
    assert(is_triangle(1, 1, 3) == 0);
    assert(is_triangle(10, 10, 10) == 1);
    log_result("Задача 5", "Все тесты пройдены");
    
    // Задача 6: Класс оценок
    log_result("Задача 6", "Начинаем тестирование");
    assert(strcmp(grade(91), "отлично") == 0);
    assert(strcmp(grade(78), "хорошо") == 0);
    assert(strcmp(grade(65), "удовлетворительно") == 0);
    assert(strcmp(grade(45), "неудовлетворительно") == 0);
    assert(strcmp(grade(100), "отлично") == 0);
    assert(strcmp(grade(120), "некорректно") == 0);
    log_result("Задача 6", "Все тесты пройдены");
    
    // Задача 7: Евклидово расстояние между точками
    log_result("Задача 7", "Начинаем тестирование");
    assert(fabs(euclidean_distance(0, 0, 3, 4) - 5.0) < 0.0001);
    assert(fabs(euclidean_distance(1, 1, 4, 5) - 5.0) < 0.0001);
    assert(fabs(euclidean_distance(0, 0, 0, 0) - 0.0) < 0.0001);
    log_result("Задача 7", "Все тесты пройдены");
    
    // Задача 8: Манхэттенское расстояние между точками
    log_result("Задача 8", "Начинаем тестирование");
    assert(manhattan_distance(1, 2, 4, 6) == 7);
    assert(manhattan_distance(0, 0, 0, 0) == 0);
    assert(manhattan_distance(1, 1, 4, 5) == 7);
    assert(manhattan_distance(-1, -1, 2, 3) == 7);
    log_result("Задача 8", "Все тесты пройдены");
    
    // Задача 9: Простые числа в интервале
    log_result("Задача 9", "Начинаем тестирование");
    assert(fabs(average_primes(0, 10) - 4.25) < 0.0001);
    assert(fabs(average_primes(2, 10) - 5.6) < 0.0001);
    assert(fabs(average_primes(0, 1) - 0.0) < 0.0001);
    log_result("Задача 9", "Все тесты пройдены");
    
    // Задача 10: Кратные числа в интервале
    log_result("Задача 10", "Начинаем тестирование");
    assert(count_multiples(1, 10, 2) == 5);
    assert(count_multiples(1, 10, 3) == 3);
    assert(count_multiples(1, 10, 1) == 10);
    assert(count_multiples(1, 10, 11) == 0);
    log_result("Задача 10", "Все тесты пройдены");
    
    // Задача 11: Високосный год
    log_result("Задача 11", "Начинаем тестирование");
    assert(is_leap_year(2000) == 1);
    assert(is_leap_year(1900) == 0);
    assert(is_leap_year(2024) == 1);
    assert(is_leap_year(2023) == 0);
    assert(is_leap_year(1600) == 1);
    log_result("Задача 11", "Все тесты пройдены");
    
    // Задача 12: Сезон по номеру месяца
    log_result("Задача 12", "Начинаем тестирование");
    assert(strcmp(season(1), "зима") == 0);
    assert(strcmp(season(4), "весна") == 0);
    assert(strcmp(season(6), "лето") == 0);
    assert(strcmp(season(9), "осень") == 0);
    assert(strcmp(season(12), "зима") == 0);
    assert(strcmp(season(13), "некорректно") == 0);
    assert(strcmp(season(0), "некорректно") == 0);
    log_result("Задача 12", "Все тесты пройдены");
    
    // Задача 13: День недели
    log_result("Задача 13", "Начинаем тестирование");
    assert(strcmp(day_of_week(1), "понедельник") == 0);
    assert(strcmp(day_of_week(7), "воскресенье") == 0);
    assert(strcmp(day_of_week(4), "четверг") == 0);
    assert(strcmp(day_of_week(8), "некорректно") == 0);
    assert(strcmp(day_of_week(0), "некорректно") == 0);
    assert(strcmp(day_of_week(743), "некорректно") == 0);
    log_result("Задача 13", "Все тесты пройдены");
    
    // Задача 14: Подсчёт цифр в числе
    log_result("Задача 14", "Начинаем тестирование");
    assert(count_digits(2020) == 4);
    assert(count_digits(7) == 1);
    assert(count_digits(0) == 1);
    assert(count_digits(123456789) == 9);
    assert(count_digits(-123) == 3);
    log_result("Задача 14", "Все тесты пройдены");
    
    // Задача 15: Реверс числа
    log_result("Задача 15", "Начинаем тестирование");
    assert(reverse_number(123) == 321);
    assert(reverse_number(1000) == 1);
    assert(reverse_number(0) == 0);
    assert(reverse_number(5) == 5);
    assert(reverse_number(123456) == 654321);
    assert(reverse_number(-123) == -321);
    log_result("Задача 15", "Все тесты пройдены");
    
    log_result("ВСЕ ЗАДАЧИ", "Все тесты успешно пройдены!");
    
    return 0;
}