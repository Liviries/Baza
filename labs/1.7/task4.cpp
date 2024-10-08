/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.7
 */

#include <iostream>

// Оголошення глобальної змінної
int i = 45;

// Функція для демонстрації глобального дозволу видимості імен
void globalScopeDemo() {

    // Оголошення локальної змінної з тим самим ім'ям, що і глобальна
    float i = 10.1f;
    std::cout << "Локальна змінна i = " << i << std::endl;

    // Використання глобальної змінної за допомогою оператора ::
    ::i = ::i * 2;
    std::cout << "Глобальна змінна після множення на 2: " << ::i << std::endl;

    // Комбінація локальної та глобальної змінних
    float sum = i + ::i;
    std::cout << "Сума локальної та глобальної змінних: " << sum << std::endl;
}

int main() {
    std::cout << "Глобальний дозвіл видимості імен\n" << std::endl;

    // Виведення значення глобальної змінної перед викликом функції
    std::cout << "Глобальна змінна перед викликом функції: " << i << std::endl;

    // Виклик функції для демонстрації глобального дозволу видимості
    globalScopeDemo();

    // Виведення значення глобальної змінної після виклику функції
    std::cout << "Глобальна змінна після виклику функції: " << i << std::endl;

    return 0;
}