//
//  IsPremutation.cpp
//  
//
//  Created by Evan Dorn on 5/24/16.
//
//

// Given two strings, tell if the two are premutations. I.e "dog" is a permutation of "god"

/*
    First check to se if two strings are of the same length.
 */

#include <iostream>
#include <string>
#include <algorithm>

bool isPermutation(std::string str_a, std::string str_b) {
        
    // Base case: If the two strings do not have the same length,
    //  then they definitely aren't permutations.
    if(str_a.length() != str_b.length()) {
        return false;
    }
    
    // Sort two strings
    sort(str_a.begin(), str_a.end());
    sort(str_b.begin(), str_b.end());
    
    // Loop through the two strings, if a character in a is not equal
    // to a character in b then return false.
    for(int i = 0; i < str_a.length(); i++) {
        if(str_a[i] != str_b[i]) {
            return false;                       // Not a permutation
        }
    }
    return true;
}

std::string returnResult(bool value) {
    if(value) {
        return "True";
    }
    return "False";
}

int main() {
    
    std::string a = "apple";
    std::string b = "elppa";
    
    std::string c = "Raquel";
    std::string d = "Evan";
    
    std::string e = "foo_bar";
    std::string f = "bar foo";
    
    std::cout << "Permutation result for " << a << " and " << b << " is " << returnResult(isPermutation(a, b)) << std::endl;
    std::cout << "Permutation result for " << c << " and " << d << " is " << returnResult(isPermutation(c, d)) << std::endl;
    std::cout << "Permutation result for " << e << " and " << f << " is " << returnResult(isPermutation(e, f)) << std::endl;

    
    return 0;
}
