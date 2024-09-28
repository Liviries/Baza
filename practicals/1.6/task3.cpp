/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 1.6
 */

#include <iostream>
#include <string>

 // using namespace std; (для слабких)

int main() {
    std::string s1 = "1010";
    std::string s2 = "1100";

    // Перевірка, чи обидві послідовності мають однакову довжину
    if (s1.length() != s2.length()) {
        std::cerr << "Помилка: Послідовності мають різну довжину." << std::endl; // Я розумію для чого використовуєтся cerr і в чому різниця, між ним та cout
        return 1;
    }

    // Для зберігання результатів операцій AND, OR та XOR.
    std::string resAND = "";
    std::string resOR = "";
    std::string resXOR = "";

    // Виконання бітових операцій порозрядно
    for (size_t i = 0; i < s1.length(); ++i) // Проходимося по кожному символу в послідовностях
    {
        // Перетворення символів на цілі числа (0 або 1)
        int bit1 = s1[i] - '0';
        int bit2 = s2[i] - '0';

        // Операція AND
        int aBit = bit1 & bit2;
        resAND += std::to_string(aBit);

        // Операція OR
        int oBit = bit1 | bit2;
        resOR += std::to_string(oBit);

        // Операція XOR
        int xBit = bit1 ^ bit2;
        resXOR += std::to_string(xBit);
    }

    std::cout << "Послідовність A: " << s1 << std::endl;
    std::cout << "Послідовність B: " << s2 << std::endl;
    std::cout << "A AND B: " << resAND << std::endl;
    std::cout << "A OR B: " << resOR << std::endl;
    std::cout << "A XOR B: " << resXOR << std::endl;

    return 0;
}