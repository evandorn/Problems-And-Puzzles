//
//  PrintPi.swift
//  
//
//  Created by Evan Dorn on 5/1/16.
//
//

import Foundation
import Darwin                       // Gives access to C functions and M_PI constant


// Note: M_PI is only valid to 15 digits
func piToNth(n:Int) -> Void {
    if (n < 0 || n > 15) {
        print("Error: Not a valid input range. Enter a number between 1 and 15")
        exit(1)
    }
    let digits = floor((M_PI)*(pow(10.0,Double(n))))
    print((digits/pow(10.0,Double(n))))
}

// FWIW print("Foo", terminator:"") is the prefered way of printing without a newline
print("Enter the number of decimal places (up to 15) you want to print Pi: " + " ")
let input:String? = readLine(stripNewline: true)
let precisionWidth:Int? = Int(input!)
piToNth(precisionWidth!)
