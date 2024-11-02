/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.5
 */

#include "list.h"
#include <iostream>

void List::addBack(short value) {
    ListNode* newNode = new ListNode(value); // Новий вузол

    if (head == nullptr) {
        head = newNode; // Якщо список порожній, новий вузол стає головою
    } else {
        ListNode* current = head;
        while (current->next != nullptr) {
            current = current->next; // Перехід до кінця списку
        }
        current->next = newNode; // Додавання нового вузла в кінець
    }
}

// Функція для створення першого списку
List createFirstList(int count) {
    List firstList;
    for (int i = 1; i <= count; ++i) {
        firstList.addBack(i);
    }
    return firstList;
}

// Функція для створення другого списку з непарних елементів першого списку
List createSecondList(const List& firstList) {
    List secondList;
    ListNode* current = firstList.head;
    int position = 1;

    while (current != nullptr) {
        if (position % 2 != 0) { // Перевірка на непарну позицію
            ListNode* newNode = new ListNode(current->data);
            newNode->next = secondList.head; // +Новий вузол на початок другого списку
            secondList.head = newNode;
        }
        current = current->next;
        ++position;
    }
    return secondList;
}

// Функція для виведення списку
void printList(const List& list) {
    ListNode* current = list.head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    int count = 11;
    List firstList = createFirstList(count);

    std::cout << "Перший список: ";
    printList(firstList);

    List secondList = createSecondList(firstList);

    std::cout << "Другий список (з непарними елементами): ";
    printList(secondList);

    return 0;
}