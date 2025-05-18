#include <iostream>
#include "StringBase.h"

int main() {
    std::string input;
    std::cout << "Type string: ";
    std::getline(std::cin, input);

    LetterString str(input);

    std::cout << "Input: " << str.getValue() << std::endl;
    std::cout << "Lowercase: " << str.toLowercase() << std::endl;
    std::cout << "Length: " << str.getLength() << std::endl;
    std::cout << "Sorted: " << str.sortString() << std::endl;
    return 0;
}