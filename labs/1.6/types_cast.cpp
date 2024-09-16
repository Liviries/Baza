#include <iostream>

// A simple function that takes a void pointer and prints the value
void printValue(void* ptr, char type) {
    // Using a switch statement to determine the type and cast accordingly
    switch (type) {
        case 'i': // integer type
            std::cout << "Integer value: " << *(int*)ptr << std::endl;
            break;
        case 'f': // float type
            std::cout << "Float value: " << *(float*)ptr << std::endl;
            break;
        case 'c': // char type
            std::cout << "Character value: " << *(char*)ptr << std::endl;
            break;
        default:
            std::cout << "Unknown type" << std::endl;
            break;
    }
}

int main() {
    // Declare different types of variables
    int intValue = 42;
    float floatValue = 3.14f;
    char charValue = 'A';

    // Using void pointers to point to these variables
    void* voidPtr;

    // Assign void pointer to the address of intValue
    voidPtr = &intValue;
    printValue(voidPtr, 'i'); // Prints the integer value

    // Assign void pointer to the address of floatValue
    voidPtr = &floatValue;
    printValue(voidPtr, 'f'); // Prints the float value

    // Assign void pointer to the address of charValue
    voidPtr = &charValue;
    printValue(voidPtr, 'c'); // Prints the character value

    return 0;
}
