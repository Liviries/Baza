#include <algorithm>
#include "String.h"

std::string StringManipulator::toLowercase(std::string input) 
{
    for (char &c : input) c = std::tolower(c);
    return input;
}

std::string StringManipulator::sortString(std::string input)
{
    std::sort(input.begin(), input.end());
    return input;
}

size_t StringManipulator::getLength(std::string input) 
{
    return input.length();
}