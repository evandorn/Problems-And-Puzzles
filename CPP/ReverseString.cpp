//
//  ReverseString.cpp
//  
//
//  Created by Evan Dorn on 5/19/16.
//
//

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
    
    std::cout << input << std::endl;
    return 0;
}
