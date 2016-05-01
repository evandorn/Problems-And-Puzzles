//
//  ReverseWords.cpp
//  
//
//  Created by Evan Dorn on 4/30/16.
//
//

/** Given an input string, reverse the string word by word.
 * For example, Given s = "the sky is blue",
 * return "blue is sky the".
 */

#include <iostream>
#include <string>

void reverseWords(std::string& str) {
    std::string word, result;
    int i = 0;
    while(i < str.size()) {
        if(char(str[i]) == ' ' && word.empty()) {
            i++;
        continue;
        }
        if(char(str[i]) == ' ' && !word.empty()) {
            result = word + " " + result;
            word="";
            i++;
            continue;
        }
        if(char(str[i]) != ' ') {
            word = word + char(str[i]);
            i++;
            continue;
        }
    }
    if(!word.empty()) {
        str = word + " " + result;
    }   else {
        str = result;
    }
    std::cout << "The words reversed is " << str << std::endl;
}

int main() {
    std::string words;
    std::cout << "Enter some words to resverse " << std::endl;
    std::getline(std::cin, words);                                      // must use getline for input with spaces on stdin
    reverseWords(words);
    return 0;
}