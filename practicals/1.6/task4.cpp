/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 1.6
 */

#include <iostream>
#include <string>
// !using namespace std; 😱😱😱

// Функція для додавання двох бітових послідовностей
std::string addBinary(std::string a, std::string b) {
    std::string result = ""; // Пуста строка для результату
    int carry = 0;           // Змінна для зберігання переносу

    // + нулі зліва для однакової довжини
    while(a.length() < b.length()) a = "0" + a;
    while(b.length() < a.length()) b = "0" + b;

    // Проходимо з кінця рядків
    for(int i = a.length() - 1; i >= 0; i--){
        int sum = (a[i]-'0') + (b[i]-'0') + carry; // Обчислення суми бітів та переносу
        carry = sum / 2;                           // Обчислення нового переносу
        sum = sum % 2;                             // Обчислення значення бітів результату
        result = std::to_string(sum) + result;      // Додавання бітів до результату
    }

    if(carry) result = "1" + result; // Якщо залишився перенос, додаємо його на початок

    return result; // Повернення результату
}

// Функція для операції NOT
std::string notBinary(std::string a) {
    std::string result = ""; // Ініціалізація пустої строки для результату
    for(char bit : a){        // Проходження по кожному біту в послідовності
        if(bit == '0') result += '1'; // Замінюємо 0 на 1
        else result += '0';            // Замінюємо 1 на 0
    }
    return result;
}

int main(){
    std::string s1 = "1010";
    std::string s2 = "1101";

    // Виконання операції додавання
    std::string sum = addBinary(s1, s2);
    std::cout << "Сума двох послідовностей: " << sum << std::endl;

    // Виконання операції NOT для першої послідовності
    std::string nots1 = notBinary(s1);
    std::cout << "NOT першої послідовності: " << nots1 << std::endl;

    return 0;
}