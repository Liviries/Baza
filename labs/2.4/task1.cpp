/**
* Done by:
 * Student Name: Yaroslav Ivanchenko
 * Student Group: 123
 * Lab 2.4
 */

#include <iostream>
#include <iomanip>

using namespace std;

double calculateY(double x) {
 if (x < 3) {
  double product = 1.0;
  for (int i = 4; i <= 7; i++) {
   product *= (i + x) / (i - x);
  }
  return product;
 } else {
  return (x + 2) * (x - 2);  // Якщо x >= 3
 }
}

int main() {
 double x_start = -1;
 double x_end = 6;
 double h = 0.3;

 cout << setw(10) << "x" << setw(15) << "y" << endl;
 cout << "-----------------------------" << endl;

 // Цикл для обчислення значення функції на кожному кроці
 for (double x = x_start; x <= x_end; x += h) {
  double y = calculateY(x); // Викликаємо підпрограму для обчислення y
  cout << setw(10) << x << setw(15) << y << endl;
 }
 return 0;
}