/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.1
 */

#include <iostream>

int main() {
    // Оголошую масив з 5 елементів
    double array[5];

    // Для парних індексів (0, 2, 4): елемент = i + 1.0
    // Для непарних індексів (1, 3): елемент = 10.0 / i + 2.0
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) { // Перевіряю, чи індекс парний
            array[i] = i + 1.0; // if Парний індекс
        } else {
            array[i] = 10.0 / i + 2.0; // if Непарний індекс
        }
    }

    // Виводимо ініціалізований масив
    std::cout << "Ініціалізований масив:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "array[" << i << "] = " << array[i] << "\n";
    }

    // Сортування масиву за спаданням
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (array[i] < array[j]) { // Порівн елементи
                // Міняємо їх місцями
                double temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Відсортований масив
    std::cout << "Відсортований масив за спаданням: \n";
    for (int i = 0; i < 5; i++) {
        std::cout << "array[" << i << "] = " << array[i] << "\n";
    }

    return 0;
}