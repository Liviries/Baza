#ifndef STRING_H
#define STRING_H

#include <string>

class StringManipulator {
public:
    std::string toLowercase(std::string input);
    std::string sortString(std::string input);
    size_t getLength(std::string input);
};

#endif