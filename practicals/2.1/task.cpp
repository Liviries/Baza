/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Pract 2.1
 */

#include <iostream>
#include <vector>
#include <limits>

// #1 - Код для пошуку максимального значення за абсолютною величиною
int main() {
    int m;
    std::cout << "Введіть кількість послідовностей: ";
    std::cin >> m;
    std::vector<std::vector<int>> A(m);

    for (int i = 0; i < m; ++i) {
        int n;
        std::cout << "Введіть кількість елементів у послідовності " << i + 1 << ": ";
        std::cin >> n;
        A[i].resize(n);
        std::cout << "Введіть елементи послідовності: ";
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }

    // #2 - Код для пошуку мінімального значення та його індексів
    int minValue = std::numeric_limits<int>::max();
    int minIndexM = -1, minIndexN = -1;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < A[i].size(); ++j) {
            if (A[i][j] < minValue) {
                minValue = A[i][j];
                minIndexM = i;
                minIndexN = j;
            }
        }
    }

    std::cout << "Індекси розміщення мінімального значення: (" << minIndexM << ", " << minIndexN << ")" << std::endl;

    // #3 - Код для пошуку максимального від'ємного значення
    int maxNegative = std::numeric_limits<int>::min();
    bool foundNegative = false;

    for (const auto& seq : A) {
        for (int val : seq) {
            if (val < 0) {
                foundNegative = true;
                maxNegative = std::max(maxNegative, val);
            }
        }
    }

    if (foundNegative) {
        std::cout << "Максимальне від’ємне значення: " << maxNegative << std::endl;
    } else {
        std::cout << "Від’ємні значення не знайдені." << std::endl;
    }

    // #4 - Код для пошуку мінімального додатного значення
    int minPositive = std::numeric_limits<int>::max();
    bool foundPositive = false;

    for (const auto& seq : A) {
        for (int val : seq) {
            if (val > 0) {
                foundPositive = true;
                minPositive = std::min(minPositive, val);
            }
        }
    }

    if (foundPositive) {
        std::cout << "Мінімальне додатне значення: " << minPositive << std::endl;
    } else {
        std::cout << "Додатні значення не знайдені." << std::endl;
    }

    // #5 - Код для виведення елементів послідовностей
    std::cout << "Введені послідовності:" << std::endl;
    for (const auto& seq : A) {
        for (int val : seq) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // #6 - Код для пошуку мінімального значення побічної діагоналі
    minValue = std::numeric_limits<int>::max();
    minIndexM = -1;
    minIndexN = -1;

    for (int i = 0; i < m; ++i) {
        if (i < A[i].size()) {
            int val = A[i][A[i].size() - i - 1]; // Елемент побічної діагоналі
            if (val < minValue) {
                minValue = val;
                minIndexM = i;
                minIndexN = A[i].size() - i - 1;
            }
        }
    }

    std::cout << "Індекси мінімального значення побічної діагоналі: (" << minIndexM << ", " << minIndexN << ")" << std::endl;

    // #7 - Код для пошуку останнього входження числа R
    int R;
    std::cout << "Введіть число R: ";
    std::cin >> R;

    int lastIndexM = -1, lastIndexN = -1;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < A[i].size(); ++j) {
            if (A[i][j] == R) {
                lastIndexM = i;
                lastIndexN = j;
            }
        }
    }

    if (lastIndexM != -1) {
        std::cout << "Індекси останнього входження R: (" << lastIndexM << ", " << lastIndexN << ")" << std::endl;
    } else {
        std::cout << "R не знайдено в множині." << std::endl;
    }

    return 0;
}