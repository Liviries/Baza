/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 1.6
 */

#include <iostream>

// Функція для додавання двох чисел за допомогою бітових операцій
int add(int a, int b){
    while(b != 0){
        // Обчислюємо бітовий перенос
        int carry = a & b;
        // Обчислюємо суму без переносу
        a = a ^ b;
        // Зсуваємо перенос на один біт вліво
        b = carry << 1;
    }
    return a;
}

int main(){
    int A = 15;
    int B = 27;

    int sum = add(A, B);
    std::cout << "Сума чисел " << A << " та " << B << " дорівнює: " << sum << std::endl;

    return 0; // Завершення програми 😱😱😱
}
