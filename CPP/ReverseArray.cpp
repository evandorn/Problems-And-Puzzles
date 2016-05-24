//
//  ReverseArray.cpp
//  
//
//  Created by Evan Dorn on 5/19/16.
//
//

#include <iostream>
#include <algorithm>
#include <iterator>

int main() {
    const int SIZE = 10;
    int arr [SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    std::reverse(std::begin(arr), std::end(arr));
    
    for (int i = SIZE - 1; i >= 0; i--) {
    
    std::cout << arr[i];
    
    }
}
