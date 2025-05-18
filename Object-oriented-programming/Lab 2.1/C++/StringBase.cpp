#include "StringBase.h"
#include <utility>
#include <cctype>

// --- StringBase ---
StringBase::StringBase() : value("") {}

StringBase::StringBase(const std::string& str) : value(str) {}

StringBase::StringBase(const StringBase& other) : value(other.value) {}

StringBase::StringBase(StringBase&& other) noexcept : value(std::move(other.value)) {}

size_t StringBase::getLength() const {
    return value.length();
}

std::string StringBase::getValue() const {
    return value;
}

// --- LetterString ---
LetterString::LetterString() : StringBase() {}

LetterString::LetterString(const std::string& str) : StringBase(str) {}

LetterString::LetterString(const LetterString& other) : StringBase(other) {}

LetterString::LetterString(LetterString&& other) noexcept : StringBase(std::move(other)) {}

std::string LetterString::sortString() const {
    std::string sorted = value;
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

std::string LetterString::toLowercase() const {
    std::string lower = value;
    for (char& c : lower) c = std::tolower(c);
    return lower;
}