/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Variant: 9
 * Student Group: 123
 * RGR
 */


#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string input;
    std::regex pattern("^[A-K]+\\.[A-K]+$");

    std::cout << "Введіть ланцюжок для перевірки: ";
    std::cin >> input;

    if (std::regex_match(input, pattern)) {
        std::cout << "Ланцюжок '" << input << "' належить мові L(V)." << std::endl;
    } else {
        std::cout << "Помилка: Ланцюжок '" << input << "' не відповідає мові L(V)." << std::endl;
    }

    return 0;
}