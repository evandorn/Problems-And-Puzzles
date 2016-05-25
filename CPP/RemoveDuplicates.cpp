//
//  RemoveDuplicates.cpp
//  
//
//  Created by Evan Dorn on 5/25/16.
//
//


// Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
// Do not allocate extra space for another array, you must do this in place with constant memory.

// For example,
// Given input array A = [1,1,2],
// Your function should return length = 2, and A is now [1,2].

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

// Remove duplicates from a raw C-style array
int removeDuplicates(int array[], int n) {
    if(n <= 1) {
        return n;
    }
    int len = 1;
    int ptr  = array[0];
    for(int i = 1; i < n; ++i) {
        if(array[i] != ptr) {
            ptr = array[i];
            array[len++] = array[i];
        }
    }
    return len;
}

// Remove duplicates from a vector
int removeVectorDuplicates(std::vector<int>& vec) {
    
    // Base case: simply return vector
    if(vec.size() <= 1) {
        return vec.size();
    }
    
    int ptr = 1, temp = vec[0];
    
    while(ptr < vec.size()) {
        if(vec[ptr] == temp) {
            vec.erase(vec.begin() + ptr);
        } else {
            temp = vec[ptr];
            ptr++;
        }
    }
    return vec.size();
}

int main() {
    
    int intArray[] = {5, 3, 32, -1, 1, 104, 53, 5, 3, 32, -1, 104, 104, -1};
    std::size_t size = sizeof(intArray) / sizeof(intArray[0]);
    std::sort(intArray, intArray + size);
    std::cout << "Array before removing duplicates: " << std::endl;
    for(size_t i = 0; i < size; ++i) {
        std::cout << intArray[i] << " ";
    }
    
    std::cout << std::endl << "Array after removing duplicates: " << std::endl;
    removeDuplicates(intArray, size);
    
    std::size_t newSize = sizeof(intArray) / sizeof(intArray[0]);
    
    for(size_t i = 0; i < newSize; ++i) {
        std::cout << intArray[i] << " ";
    }

    // Warning this type of initialization requires a C++11 Compiler
    std::vector<int> intVec = {56, 32, -43, 23, 12, 93, 132, 93, 93, -154, -154, 132};
    sort(intVec.begin(), intVec.end());                                                 // Sorting the int vector
    
    std::cout << std::endl << "Vector before removing duplicates: " << std::endl;
    for (std::vector<int>::size_type i = 0; i != intVec.size(); ++i) {
        std::cout << intVec[i] << " ";
    }
    
    removeVectorDuplicates(intVec);
    
    std::cout << std::endl << "Vector after removing duplicates: " << std::endl;
    
    for (std::vector<int>::size_type i = 0; i != intVec.size(); ++i) {
        std::cout << intVec[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
