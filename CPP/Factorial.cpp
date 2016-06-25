//
//  Factorial.cpp
//  
//
//  Created by Evan Dorn on 5/8/16.
//
//

#include <iostream>

int factorial(int n) {
    // Base case. Note: Recursion MUST have a base case for termination purposes.
    //  If there is no base case then the function will result in infinite recursion.
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