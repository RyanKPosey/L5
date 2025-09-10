/*
    Programmer: Ryan Posey (Code given from assignemnt instructions)
    Assignment: L5
    Purpose: Practice using external functions
    Due date: 9/9/2025
*/

#include <iostream>
#include <array>
#include "selection-sort.h"

int main() {
    array<int, 5> numbers = {42, 7, 19, 3, 25};

    cout << "Original array: ";
    for (int num : numbers) cout << num << " ";
    cout << endl;

    selectionSort(numbers);

    cout << "Sorted array:   ";
    for (int num : numbers) cout << num << " ";
    cout << endl;

    return 0;
}