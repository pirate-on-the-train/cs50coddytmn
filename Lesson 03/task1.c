#include <stdio.h>      // Подключаем заголовочный файл

int main()
{
    // Дана сторона квадрата a. Найти его периметр.
    // P = (a + a) * 2
    
    int a;                          // Переменная a
    scanf("%d", &a);                // Считываем с клавиатуры число и кладём его в переменную a

    printf("P = %d", a * 4);        // Выводим в консоль периметр
}