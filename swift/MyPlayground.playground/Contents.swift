//: Playground - noun: a place where people can play

import Cocoa

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

