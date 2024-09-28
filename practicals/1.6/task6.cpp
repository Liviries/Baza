/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 1.6
 */

#include <iostream>
#include <string>

// Функція для зсуву вліво
std::string shiftLeft(std::string a, int pos){
    for(int i = 0; i < pos; i++){              // Цикл для зсуву на кілька позицій
        a += "0";                             // Додаємо нуль справа
        a.erase(0,1);                  // Видаляємо перший символ зліва
    }
    return a;                              // Повертаємо змінену послідовність
}

// Функція для зсуву вправо
std::string shiftRight(std::string a, int pos){
    for(int i = 0; i < pos; i++){       // Цикл для зсуву на кілька позицій
        a = "0" + a;                   // Додаємо нуль зліва
        if(!a.empty()) {
            // Перевіряємо, чи строка не порожня
            a.pop_back();            // Видаляємо останній символ справа
        }
    }
    return a;                      // Повертаємо змінену послідовність
}

int main(){
    std::string number = "1011001";        // 89 у двійковій системі

    int shiftpos = 2;                    // Кількість позицій для зсуву

    // Виконання зсуву вліво
    std::string shiftedLeft = shiftLeft(number, shiftpos);
    std::cout << "Після зсуву вліво на " << shiftpos << " позицій: " << shiftedLeft << std::endl;

    // Виконання зсуву вправо
    std::string shiftedRight = shiftRight(number, shiftpos);
    std::cout << "Після зсуву вправо на " << shiftpos << " позицій: " << shiftedRight << std::endl;

    return 0;
}