//
//  ReverseString.swift
//  
//
//  Created by Evan Dorn on 5/19/16.
//
//

// Reverse a string in swift without using the built in reverse method

import Foundation

func myReverse(str:String) -> String {
    
    var buffer = ""
    
    for character in str.characters {
        buffer.insert(character, atIndex: buffer.startIndex)
    }
    return buffer
}

print("Enter a string to reverse")
let userInput = readLine(stripNewline: true)!

let reversedString = myReverse(userInput)

print("\(reversedString)")
