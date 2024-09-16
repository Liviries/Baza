/**
 * Done by:
 * Student Name: Severyn Kotyhoroshko
 * Student Group: 123
 * Lab 1.4
 */

#include <iostream>

using namespace std;

int main() {
    // Comment to local scope 1
    {
        int num = 10;
        int* ptr = &num; // ptr now holds the address of num

        cout << "Value of num: " << num << endl;        // Outputs: 10
        cout << "Address of num: " << ptr << endl;      // Outputs the memory address of num
        cout << "Value at the address stored in ptr: " << *ptr << endl; // Outputs: 10

        num++;
        cout << num << endl;

        // delete ptr;         // Deallocates the memory
        ptr = nullptr;         // Good practice to avoid dangling ptrs
        cout << "Nullified ptr: " << ptr << endl;
    }

    // Comment to local scope 2
    {
        cout << "Pointer Arithmetic" << endl;
        int arr[] = {1, 2, 3, 4, 5};

        cout << "sizeof arr = " << sizeof(arr) << endl;
        int* ptr = arr;         // Points to the first element of the array

        const int firstEl = arr[0];

        cout << arr[0] << endl;   // Outputs: 1
        cout << ptr << endl;   // Outputs: Address
        cout << *ptr << endl;   // Outputs: 1
        ptr++;                  // Moves to the next element
        cout << *ptr << endl;   // Outputs: 2

        ptr = nullptr;         // Good practice to avoid dangling ptrs
        cout << "sizeof arr = " << sizeof(arr) << endl;
    }

    // Comment to local scope 3
    {
        cout << "Dynamic Memory Allocation for INT" << endl;
        int* ptr = new int;    // Allocates memory for a single integer
        *ptr = 20;             // Sets the value of the allocated memory

        cout << *ptr << endl;  // Outputs: 20

        delete ptr;            // Deallocates the memory
        ptr = nullptr;         // Good practice to avoid dangling ptrs
    }


    // Comment to local scope 4
    {
        cout << "Dynamic Memory Allocation for ARR" << endl;
        int* arr = new int[5]; // Allocates memory for an array of 5 integers

        cout << "sizeof *arr = " << sizeof(*arr) << endl;
        cout << "sizeof arr = " << sizeof(arr) << endl;

        cout << arr << endl;
        for(int i = 0; i < 5; i++) {
            arr[i] = i + 1;    // Initializes array
        }

        delete[] arr;          // Deallocates the array memory
        arr = nullptr;
        cout << arr << endl;
        cout << "sizeof *arr = " << sizeof(*arr) << endl;
        cout << "sizeof arr = " << sizeof(arr) << endl;
    }

    // Comment to local scope 5
    {
        cout << "Pointers to Pointers" << endl;
        int num = 10;
        int* ptr = &num;
        int** ptrToPtr = &ptr;

        cout << **ptrToPtr << endl; // Outputs: 10
        ptr = nullptr;
        ptrToPtr = nullptr;
    }

    return 0;
}