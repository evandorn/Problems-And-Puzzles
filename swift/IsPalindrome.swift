//
//  IsPalindrome.swift
//  
//
//  Created by Evan Dorn on 5/19/16.
//
//

import Foundation

print("Enter a string: ")
let userInput = readLine(stripNewline: true)!

let reverse = String(userInput.characters.reverse())

if (reverse == userInput) {
    print("\(userInput) is a palindrome")
} else {
    print("\(userInput) is not a palindrome")
    print("\(userInput) reversed is \(reverse)")
}
