#include <iostream>
#include <limits>

int fMIN(int A[], int n) {
    int minVal = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] < minVal) {
            minVal = A[i];
        }
    }
    return minVal;
}

int fMAX(int A[], int n) {
    int maxIndex = -1;
    int maxVal = std::numeric_limits<int>::min();
    for (int i = 0; i < n; ++i) {
        if (A[i] > 0 && A[i] > maxVal) {
            maxVal = A[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int fMINb(int A[], int n, int P) {
    int minVal = std::numeric_limits<int>::max();
    for (int i = 0; i < n; ++i) {
        if (A[i] > P && A[i] < minVal) {
            minVal = A[i];
        }
    }
    return minVal == std::numeric_limits<int>::max() ? -1 : minVal;
}


int flOCC(int A[], int n, int P) {
    int lastIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (A[i] == P) {
            lastIndex = i;
        }
    }
    return lastIndex;
}


int cOCC(int A[], int n, int P) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] == P) {
            ++count;
        }
    }
    return count;
}

int main() {
    const int SIZE = 10;
    int A[SIZE] = { 3, -1, 7, 4, 5, -2, 6, 8, -9, 2 };
    int P = 4;

    std::cout << "Мінімальне значення: " << fMIN(A, SIZE) << std::endl;
    std::cout << "Індекс найбільшого додатного значення: " << fMAX(A, SIZE) << std::endl;
    std::cout << "Мінімальне значення більше " << P << ": " << fMINb(A, SIZE, P) << std::endl;
    std::cout << "Індекс останнього входження " << P << ": " << flOCC(A, SIZE, P) << std::endl;
    std::cout << "Кількість входжень " << P << ": " << cOCC(A, SIZE, P) << std::endl;

    return 0;
}
