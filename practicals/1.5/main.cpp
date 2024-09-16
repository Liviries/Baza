/**
 * Done by:
 * Student Name: Severyn Kotyhoroshko
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initRandomizer() {
    // Seed the random number generator with the current time
    srand(time(0));  // srand(time(NULL)) could also be used
}

int main() {
    // Задано послідовність значень А[n]. Знайти мінімальне значення у послідовності.
    {
        initRandomizer();

        int n;
        cout << "Enter the length of the sequence: ";
        cin >> n;

        int* arr = new int[n];
        // Populate the array with random values
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 100;
        }

        // cout the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        int min = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        cout << "The minimum value in the sequence is: " << min << endl;

        delete[] arr;
        arr = nullptr;
    }

    return 0;
}
