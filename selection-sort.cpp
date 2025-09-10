/*
    Programmer: Ryan Posey (Code given from assignemnt instructions)
    Assignment: L5
    Purpose: Practice using external functions
    Due date: 9/9/2025
*/

#include "selection-sort.h"
#include <iostream>
#include <array>

void selectionSort(array<int, 5>& arr) {
    for (size_t i = 0; i < arr.size() - 1; i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}