//
//  SoE.swift
//
//  A program to find all prime numbers less than 100000 using the Sieve of Eratosthenes algorithm
//  Returns a list of all primes < 100001.
//
//  Created by Evan Dorn on 5/18/16.
//
//

import Foundation

var primes = [Int]()        // array to hold primes

var numbers = [Bool](count: 100000+1, repeatedValue: true)

for var i in numbers.count {
    if numbers[i] {
        for var j = i*i; j < sieve.count; j += i {
            numbers[j] = false

    }
  }
}
