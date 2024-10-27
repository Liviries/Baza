/**
 * Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.3
 */

#include <iostream>
using namespace std;

struct Element {
    int value;
    Element* next;
};

int main() {
    // Вказівник на чергу
    Element* queue = nullptr;

    Element array[10];
    for (int i = 0; i < 10; i++) {
        array[i].value = i;
        array[i].next = nullptr;
    }

    int N;
    cout << "Введіть кількість елементів для додавання до черги (0-9): ";
    cin >> N;

    // Додаємо N елементів до черги
    if (N >= 0 && N <= 9) {
        // Додаємо елементи до черги
        for (int i = 0; i < N; i++) {
            Element* newElement = &array[i];
            newElement->next = queue;
            queue = newElement;
        }
    } else {
        cout << "Невірне значення N!" << endl;
    }

    cout << "Елементи черги:" << endl;
    Element* current = queue;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    int M;
    cout << "Введіть кількість елементів для видалення (0-15): ";
    cin >> M;

    // Видаляємо M елементів
    if (M >= 0 && M <= 15) {
        for (int i = 0; i < M && queue != nullptr; i++) {
            queue = queue->next;      // Просто переміщуємо вказівник
        }
    } else {
        cout << "Невірне значення M!" << endl;
    }

    cout << "Черга після видалення:" << endl;
    current = queue;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}