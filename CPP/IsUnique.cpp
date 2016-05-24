//
//  IsUnique.cpp
//  
//
//  Created by Evan Dorn on 5/24/16.
//
//

// Function to determine if a string has all unique characters


/*
    Solution explaination:  Assume character set is ASCII (not unicode). Create an array of bools, 
    flag at index i indicates whether the character @ i is in the alphabet contained in the string.
    The second time you see this character you can immediately return false. Also can immediately return
    false if the number of characters in the string is greater than the max number of ASCII characters.
 
 */


// Time complexity is O(n) because you will be looping through the entire string
// Space complexity is O(1).


#include <iostream>
#include <string>
#include <cstring>

bool isUnique(std::string str) {
    
    bool char_set[256];
    memset(char_set, 0, sizeof(char_set));            // allocate space for array
    int len = str.length();             // get length of string
    
    for(int i = 0; i < len; ++i) {
        
        int val = (int)str[i];
        if(char_set[val]) {                    // already found this char in the string
            return false;
        }
        char_set[val] = true;
    }
    return true;
}

int main() {
    std::string str1 = "Soy Evan.";
    std::string str2 = "abcdefghijklmnopqrstuvwxyz1234567890";
    std::string str3 = "blah blah blah";
    
    std::cout << isUnique(str1) << " " << isUnique(str2) << " " << isUnique(str3) << std::endl;
    
    return 0;
}
