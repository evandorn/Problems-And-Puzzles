//
//  IsPalindrome.cpp
//  
//
//  Created by Evan Dorn on 5/19/16.
//
//

/*
 *  Program to check if an input is a palindrome.
 *    If string is a palandrome, then program simply returns "Input is a palandrome."
 *    If the string is not a palandrome, then it returns the string reversed.
 */


#include <iostream>
#include <string>
#include <stack>

int main() {
    
    std::string input;
    std::getline(std::cin, input);
    
    std::string checker = input;
    
    std::stack<char> temp;
    
    for(char str : input) {
        temp.push(str);
    }
    
    for(int i = 0; i < input.length(); i++) {
        input[i] = temp.top();
        temp.pop();
    }
    
    // Check if input reversed is a palindrome
    if(input == checker) {
        std::cout << "Input is a palandrome" << std::endl;
    } else {
        std::cout << input << std::endl;
    }
    
    return 0;
}
