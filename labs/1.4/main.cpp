/**
 * Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 1.4
 */

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

#ifdef _WIN32
    system("chcp 65001");
#endif
    system("cls");

        // 1. Опис змінних напередвизначених типів (табл. 9)
        unsigned short wA;
        int nB;
        float fltC;
        double dblD;

        // 2. Опис вказівних змінних відповідних типів (табл. 9)
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
        std::wcout << L"Розмір wA: " << sizeof(wA) << " байт" << std::endl;
        std::wcout << L"Розмір nB: " << sizeof(nB) << " байт" << std::endl;
        std::wcout << L"Розмір fltC: " << sizeof(fltC) << " байт" << std::endl;
        std::wcout << L"Розмір dblD: " << sizeof(dblD) << " байт" << std::endl;

        std::wcout << L"\nРозміри вказівних змінних:" << std::endl;
        std::wcout << L"Розмір pwA: " << sizeof(pwA) << " байт" << std::endl;
        std::wcout << L"Розмір pnB: " << sizeof(pnB) << " байт" << std::endl;
        std::wcout << L"Розмір pfltC: " << sizeof(pfltC) << " байт" << std::endl;
        std::wcout << L"Розмір pdblD: " << sizeof(pdblD) << " байт" << std::endl;

        // 7. Ініціювання нетипізованої вказівної змінної
        pV = pwA;
        std::wcout << L"\nНетипізована вказівна змінна pV вказує на pwA: " << *((unsigned short*)pV) << std::endl;

        pV = pnB;
        std::wcout << L"Нетипізована вказівна змінна pV вказує на pnB: " << *((int*)pV) << std::endl;

        // 8. Опис посилання
        unsigned short& refWA = wA;
        std::wcout << L"\nПосилання refWA: " << refWA << std::endl;

        return 0;
    }
