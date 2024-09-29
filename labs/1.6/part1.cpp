/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.6
 */

#include <iostream>

int main() {
    // Опис змінних символьного типу
    char ch1;
    char ch2;
    char ch3;

    // Опис констант символьного типу
    const char constCh1 = '9';
    const char constCh2 = 'Q';
    const char constCh3 = '#';

    // Одразу задаю значення змінним при їх створенні
    char chVar1 = constCh1;
    char ChVar2 = constCh2;
    char ChVar3 = constCh3;

    // Присвоюю значення змінній після створення (Мене змусили це зробити у завданні(((  (допоможіть))
    ch1 = 0x3;
    ch2 = 0x67;
    ch3 = 0x36;

    std::cout << "constCh1: " << constCh1 << std::endl;
    std::cout << "constCh2: " << constCh2 << std::endl;
    std::cout << "constCh3: " << constCh3 << std::endl;
    std::cout << "ch1 (код 0x3): " << ch1 << std::endl; // Це значення може бути не видимим, бо це не друкований символ 😱(Як він міг... (не 31к))
    std::cout << "ch2 (код 0x67): " << ch2 << std::endl;
    std::cout << "ch3 (код 0x36): " << ch3 << std::endl;

    return 0;
}
