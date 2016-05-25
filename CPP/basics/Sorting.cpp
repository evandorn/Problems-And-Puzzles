//
//  Sorting.cpp
//  
//
//  Created by Evan Dorn on 5/25/16.
//
//

// Example of how to use the STL sort method

#include <iostream>
#include <algorithm>
#include <vector> 

int main() {
// sorting an array
int array[] = { 23, 5, -10, 0, 0, 321, 1, 2, 99, 30 };

std::size_t size = sizeof(array) / sizeof(array[0]);

// print before sorting
std::cout << "Array before sorting: " << std::endl;
for (std::size_t i = 0; i < size; ++i) {
    std::cout << array[i] << ' ';
}

std::sort(array, array + size);                             // call to std::sort()

std::cout << std::endl << "Array after sorting: " << std::endl;
for (std::size_t i = 0; i < size; ++i) {
    std::cout << array[i] << ' ';
}
std::cout << std::endl;    
}