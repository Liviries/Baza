/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 1.6
 */

#include <iostream>

int main() {
    int A = 24;

    std::cout << "Число A: " << A << std::endl;

    // Використання AND для перевірки кратності 8
    if ((A & 7) == 0) // Я розумію як це працює😱😱😱 (реально)
        {
        std::cout << "Число A кратне 8" << std::endl;
    } else {
        std::cout << "Число A не кратне 8" << std::endl;
    }
    return 0;
}