/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 1.6
 */

#include <iostream>

int main() {
    int A = 12;
    int B = -12;

    std::cout << "Число A: " << A << std::endl;
    std::cout << "Число B: " << B << std::endl;

    // Використання XOR для перевірки рівності
    if ((A ^ B) == 0) {
        std::cout << "Числа A і B рівні" << std::endl;
    } else {
        std::cout << "Числа A і B не рівні" << std::endl;
    }
    return 0;
}