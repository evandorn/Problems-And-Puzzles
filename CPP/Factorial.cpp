//
//  Factorial.cpp
//  
//
//  Created by Evan Dorn on 5/8/16.
//
//

#include <iostream>

int factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    std::cout << "Enter a number to compute it's factorial" << std::endl;
    int input;
    std::cin >> input;
    int fact = factorial(input);
    std::cout << "The factorial of " << input << " is " << fact << std::endl;
}