#ifndef STRINGBASE_H
#define STRINGBASE_H

#include <string>
#include <algorithm>

class StringBase {
protected:
    std::string value;
public:
    StringBase(); // конструктор за замовчуванням
    StringBase(const std::string& str); // з параметром
    StringBase(const StringBase& other); // копіювання
    StringBase(StringBase&& other) noexcept; // переміщення
    virtual ~StringBase() = default;

    size_t getLength() const;
    std::string getValue() const;
};

class LetterString : public StringBase {
public:
    LetterString();
    LetterString(const std::string& str);
    LetterString(const LetterString& other);
    LetterString(LetterString&& other) noexcept;
    ~LetterString() override = default;

    std::string sortString() const;
    std::string toLowercase() const;
};

#endif