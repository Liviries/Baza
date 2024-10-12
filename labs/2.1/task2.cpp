/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.1
 */

#include <iostream> // Підключаємо бібліотеку для вводу/виводу

int main() {
    int array1[10];
    int array2[10];
    int array3[10];

    // Перший масив
    for(int i = 0; i < 10; i++) {
        array1[i] = 73 - i;
    }

    // Другий масив
    for(int i = 0; i < 10; i++) {
        array2[i] = 66 + 2 * i;
    }

    // Третій масив
    for(int i = 0; i < 10; i++) {
        array3[i] = array1[i] + array2[i];
    }

    // Вважаємо, що останні два елементи третього масиву є максимальними
    int max1 = array3[8];
    int max2 = array3[9];


    int sum = max1 + max2; // Сума двох максимальних елементів

    // Виводимо третій масив на екран
    std::cout << "Третій масив: ";
    for(int i = 0; i < 10; i++) {
        std::cout << array3[i] << " ";
    }

    std::cout << "\nMаксимальні елементи: " << max1 << " та " << max2 << std::endl;

    std::cout << "Сума двох максимальних елементів: " << sum << std::endl;
    return 0;
}