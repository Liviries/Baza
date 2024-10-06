/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.8
 */

#include <iostream>

int main() {
    // Оголошуємо змінні для операндів
    int iA = -52;
    int iB = 18;

    // Виконуємо додавання
    int result_add = iA + iB;

    // Виводимо результат додавання
    std::cout << "Результат додавання: " << iA << " + " << iB << " = " << result_add << std::endl;

    // Перевіряємо результат з заданими значеннями за допомогою операторів if-else
    if (result_add == 31) {
        std::cout << "Результат дорівнює 31" << std::endl;
    }
    else if (result_add == 32) {
        std::cout << "Результат дорівнює 32" << std::endl;
    }
    else if (result_add == 111) {
        std::cout << "Результат дорівнює 111" << std::endl;
    }
    else if (result_add == 49) {
        std::cout << "Результат дорівнює 49" << std::endl;
    }
    else {
        std::cout << "Результат не співпадає з жодним значенням" << std::endl;
    }

    return 0;
}