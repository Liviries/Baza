#include <iostream>
#include <cmath>


constexpr double PI = 3.14159265358979323846;

int t1() {
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        sum += i;
    }
    return sum;
}

int t2(int N) {
    int result = 1;
    for (int i = 1; i <= N; ++i) {
        result *= i;
    }
    return result;
}

int t3(int N) {
    int sum = 0;
    for (int i = 0; i <= N; i += 2) {
        sum += i;
    }
    return sum;
}

int t4(const int a1, const int d, int n) {
    int product = 1;
    for (int i = 0; i < n; ++i) {
        product *= a1 + i * d;
    }
    return product;
}

void t5(const double h) {
    for (double x = 0; x <= PI; x += h) {
        double result = cos(x);
        std::wcout << "F(" << x << ") = " << result << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
#ifdef _WIN32
    system("chcp 65001");
#endif

    std::wcout << L"1. Сума чисел від 1 до 5: " << t1() << std::endl;

    int N = 5;
    std::wcout << L"2. Факторіал числа " << N << ": " << t2(N) << std::endl;

    N = 10;
    std::wcout << L"3. Сума всіх парних чисел від 0 до " << N << ": " << t3(N) << std::endl;

    constexpr int a1 = 2;

    int d = 3;
    constexpr int n = 4;
    std::wcout << L"4. Добуток перших " << n << L" елементів арифметичної прогресії: " << t4(a1, d, n) << std::endl;


    std::wcout << L"5. Табулювання функції F(x) = cos(x) на проміжку від 0 до π з кроком h = 0.01:\n";
    t5(0.01);

    return 0;
}