//
//  PrintPi.cpp
//  
//
//  Created by Evan Dorn on 4/26/16.
//
//

/*
 * Problem statement
 * 1.) Find PI to the Nth Digit - Enter a number and have the program generate 
 *  PI up to that many decimal places. Keep a limit to how far the program will go.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

#define _USE_MATH_DEFINES           // For older systems in order to access M_PI

int main() {
    int precisionWidth;
    std::cout << "Enter the number of decimal places (up to 50) you want to print Pi: " << " ";
    std::cin >> precisionWidth;
    if(precisionWidth >= 50) {
        std::cout << "You entered " << precisionWidth << ", input is too large. Printing PI at 50 places." << std::endl;
        std::cout << std::setprecision(precisionWidth) << M_PI << std::endl;
    } else {
    std::cout << "PI at " << precisionWidth << " places" << std::endl;
    std::cout << std::setprecision(precisionWidth) << M_PI << std::endl;
    }
    return 0;
}
