/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.3
 */

#include <iostream>
#include <vector>
using namespace std;


struct Element {
    float value;
};

int main() {
    // Створюємо вектор для зберігання списку
    vector<Element> list;

    Element array[10];
    for (int i = 0; i < 10; i++) {
        array[i].value = i * 1.1;
    }

    int N;
    cout << "Введіть кількість елементів для додавання до списку (0-9): ";
    cin >> N;

    // Додаємо N елементів до векторy
    if (N >= 0 && N <= 9) {
        for (int i = 0; i < N; i++) {
            list.push_back(array[i]); // Додаємо елемент із масиву до списку
        }
    } else {
        cout << "Невірне значення N!" << endl;
    }

    cout << "Елементи списку:" << endl;
    for (int i = 0; i < list.size(); i++) {
        cout << list[i].value << " "; // Виведення значень елементів
    }
    cout << endl;

    int M;
    cout << "Введіть кількість елементів для видалення (0-15): ";
    cin >> M;

    // Перевіряємо, чи можливо видалити M елементів
    if (M >= 0 && M <= 15) {
        for (int i = 0; i < M && !list.empty(); i++) {
            list.pop_back(); // Видаляємо останній елемент зі списку
        }
    } else {
        cout << "Невірне значення M!" << endl;
    }

    cout << "Список після видалення:" << endl;
    for (int i = 0; i < list.size(); i++) {
        cout << list[i].value << " "; // Виведення значень елементів
    }
    cout << endl;

    return 0;
}