#include <iostream>
#include <string>
#include "String.h"

int main() {
    std::string input;

    std::cout << "Type string: ";
    std::getline(std::cin, input);

    StringManipulator transfer;

    std::cout << "Input: " << input << std::endl;
    std::cout << "Lowercase: " << transfer.toLowercase(input) << std::endl;
    std::cout << "Length: " << transfer.getLength(input) << std::endl;
    std::cout << "Sorted: " << transfer.sortString(input) << std::endl;
    return 0;
}
