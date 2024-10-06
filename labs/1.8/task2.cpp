/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.8
 */

#include <iostream>

int main() {
    // Оголошуємо змінні для операндів
    int iA = -2;
    int iB = 2;

    // Виконуємо порівняння за допомогою оператора if
    if (iA < iB) {
        std::cout << "Результат: " << iA << " < " << iB << std::endl;
    }
    else {
        std::cout << "Результат: " << iA << " >= " << iB << std::endl;
    }

    // Перевіряємо значення операндів за допомогою операторів if-else
    if (iA == 35 || iB == 35) {
        std::cout << "Одне зі значень дорівнює 35" << std::endl;
    }
    else if (iA == 53 || iB == 53) {
        std::cout << "Одне зі значень дорівнює 53" << std::endl;
    }
    else if (iA == 62 || iB == 62) {
        std::cout << "Одне зі значень дорівнює 62" << std::endl;
    }
    else {
        std::cout << "Значення не співпадає з жодним заданим значенням" << std::endl;
    }

    return 0;
}