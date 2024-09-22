/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>


const int A = 92; // A - константа з Таблиці 12, рядок 6

int main() {

    int B = 159;     // B - змінна з Таблиці 12, рядок 6
    int E = 653;     // E - змінна з Таблиці 12, рядок 6

    float C_value = 4.4; // значення для C з Таблиці 12, рядок 6
    float *C = &C_value; // вказівник на змінну C

    int D = 51; // D - літерал з Таблиці 12, рядок 6

    // Ініціювання змінної F
    int F = sizeof(int);

    // Виконання обчислення у заданій послідовності (A <БО1> <УО> B <АО1> <СО> C <ОВ> D <АО2> E <БО2> <БазО> F)

    int result = (A & (~B) + (*C) * D < E + F) << sizeof(E);

    // Виведення результату
    std::cout << "Результат обчислення: " << result << std::endl;

    return 0;
}