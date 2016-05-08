//
//  Factorial.swift
//  
//
//  Created by Evan Dorn on 5/8/16.
//
//

import Foundation

func factorial(n:Int) -> Int {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n-1)
    }
}

print("Enter a number to compute the factorial")

let input:Int! = Int(readLine()!)
let fact = factorial(input)

print("The factorial of \(input) is \(fact)")
