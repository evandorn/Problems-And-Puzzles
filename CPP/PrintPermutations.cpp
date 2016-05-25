//
//  PrintPermutations.cpp
//  
//
//  Created by Evan Dorn on 5/24/16.
//
//

// Write a program to print all the permutations of a string

/*
    A permutation is just a different arrangment. A string of length n has n! permutations
 
 */


#include <algorithm>
#include <iostream>
#include <string>

// With the STL next_permutation function can be solved as simply as:

/*
int main() {
    std::string s("cat");
    do {
        std::cout << s << "\n";
    }
    while (std::next_permutation(s.begin(), s.end()));
    
    return 0;
}
*/
