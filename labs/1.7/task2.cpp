/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.7
 */

#include <iostream>

// Оголошення глобальної статичної змінної
static int globVar = 45;

// Функція для демонстрації статичного розподілу пам'яті
void sMemAlloc() {

    // Оголошення статичної змінної у функції
    static int localStaticVar = 10;
    std::cout << "Початок функції StaticMemoryAllocation: \n";
    std::cout << "localStaticVar = " << localStaticVar << std::endl;

    // Зміна значення статичної змінної
    localStaticVar += 5;
    globVar += 10;
    std::cout << "Після зміни:\n";
    std::cout << "localStaticVar = " << localStaticVar << std::endl;
    std::cout << "globVar = " << globVar << std::endl;
}

int main() {
    std::cout << "Дослідження статичного розподілу пам'яті\n" << std::endl;

    // Виведення значення глобальної статичної змінної
    std::cout << "Глобальна змінна перед викликом функції: " << globVar << std::endl;

    // Виклик функції перший раз
    sMemAlloc();

    // Виклик функції другий раз для демонстрації збереження значення статичної змінної
    sMemAlloc();

    // Виведення значення глобальної статичної змінної після викликів
    std::cout << "\nГлобальна змінна після виклику функції: " << globVar << std::endl;

    return 0;
}