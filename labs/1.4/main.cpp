/**
 * Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.4
 */

#include <iostream>

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

#ifdef _WIN32
    system("chcp 65001");
#endif
    system("cls");

    // 1. Опис змінних напередвизначених типів
    unsigned short wA;
    int nB;
    float fltC;
    double dblD;

    // 2. Опис вказівних змінних відповідних типів
    unsigned short* pwA;
    int* pnB;
    float* pfltC;
    double* pdblD;

    // 3. Опис нетипізованої вказівної змінної
    void* pV;

    // 4. Ініціювання вказівних змінних адресами змінних
    pwA = &wA;
    pnB = &nB;
    pfltC = &fltC;
    pdblD = &dblD;

    // 5. Ініціювання змінних за допомогою операції розіменування
    *pwA = 6692;
    *pnB = 1226;
    *pfltC = -896.333333f;
    *pdblD = 6.9e-86;

    // Виведення змінних
    std::wcout << L"Значення змінних:" << std::endl;
    std::wcout << L"unsigned short: " << *pwA << std::endl;
    std::wcout << L"int: " << *pnB << std::endl;
    std::wcout << L"float: " << *pfltC << std::endl;
    std::wcout << L"double: " << *pdblD << std::endl;

    // 6. Визначення розміру всіх змінних
    std::wcout << L"\nРозміри змінних:" << std::endl;
    std::wcout << L"Розмір wA (unsigned short): " << sizeof(wA) << L" байт" << std::endl;
    std::wcout << L"Розмір nB (int): " << sizeof(nB) << L" байт" << std::endl;
    std::wcout << L"Розмір fltC (float): " << sizeof(fltC) << L" байт" << std::endl;
    std::wcout << L"Розмір dblD (double): " << sizeof(dblD) << L" байт" << std::endl;

    std::wcout << L"\nРозміри вказівних змінних:" << std::endl;
    std::wcout << L"Розмір pwA: " << sizeof(pwA) << L" байт" << std::endl;
    std::wcout << L"Розмір pnB: " << sizeof(pnB) << L" байт" << std::endl;
    std::wcout << L"Розмір pfltC: " << sizeof(pfltC) << L" байт" << std::endl;
    std::wcout << L"Розмір pdblD: " << sizeof(pdblD) << L" байт" << std::endl;

    // 7. Ініціювання нетипізованої вказівної змінної
    pV = pwA;
    std::wcout << L"\nНетипізована змінна вказує на pwA (unsigned short): " << *((unsigned short*)pV) << std::endl;

    pV = pnB;
    std::wcout << L"Нетипізована змінна вказує на pnB (int): " << *((int*)pV) << std::endl;

    // 8. Опис посилання
    unsigned short& refWA = wA;
    std::wcout << L"\nПосилання на wA (unsigned short): " << refWA << std::endl;

    return 0;
}