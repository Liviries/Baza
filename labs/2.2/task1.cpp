/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.2
 */

#include <iostream>
#include <string>

int main() {
    // Масив імен студентів
    std::string names[7] = {"Іван", "Марія", "Петро", "Ольга", "Сергій", "Анна", "Микола"};

    // Масиви зросту і ваги студентів
    int heights[7] = {170, 160, 180, 165, 175, 158, 172};
    float weights[7] = {60.0f, 50.0f, 70.0f, 55.0f, 65.0f, 48.0f, 88.0f};

    // Лічильник для студентів з ідеальною вагою
    int countIdealWeight = 0;

    // Перевіряємо кожного студента
    for(int i = 0; i < 7; i++) {
        // Формула: Ріст - 110 = Вага
        if((heights[i] - 110) == weights[i]) {
            countIdealWeight++;
        }
    }

    // Виводимо результат
    std::cout << "Кількість студентів з ідеальною вагою: " << countIdealWeight << std::endl;

    // Масив курсів студентів
    int courses[7] = {3, 2, 4, 1, 5, 2, 3};

    // Масив міст студентів
    std::string cities[7] = {"Київ", "Львів", "Київ", "Одеса", "Київ", "Харків", "Дніпро"};

    // К-ть киян на 3-му курсі
    int countKiev3Course = 0;
    int total3Course = 0;

    // Перевіряємо кожного студента
    for(int i = 0; i < 7; i++) {
        if(courses[i] == 3) { // Якщо студент 3-го курсу
            total3Course++;
            if(cities[i] == "Київ") { // Якщо з Києва
                countKiev3Course++;
            }
        }
    }

    // Обчислюємо процент киян на 3-му курсі
    double percentageKiev3Course = 0.0;
    if(total3Course > 0) {
        percentageKiev3Course = (static_cast<double>(countKiev3Course) / total3Course) * 100; // Я розумію для чого тут потрібен статік-каст))
    }

    std::cout << "Процент киян 3-го курсу: " << percentageKiev3Course << "%\n";

    return 0;
}