// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 1st, 2025
// Celsius to fahrenheit

#include <iostream>
#include <string>

void fahrenheit() {
    // Get the temperature in celsius
    std::string input;
    std::cout << "Enter your temperature in Celsius: ";
    std::cin >> input;

    // Initialize the temperature variable
    float temp_c;

    try {
        // Call the fahrenheit function
        temp_c = std::stof(input);

        float temp_f;
        temp_f = 9 / 5 * temp_c + 32;
        std::cout << "Your temperature in fahrenheit is:" << temp_f;
    } catch (std::invalid_argument) {
        // Warn user if they entered invalid input
        std::cout << "Invalid input, you entered:" << input;
    }
}

int main() {
    // Call the fahrenheit function
    std::cout << "Welcome to fahrenheit program" << std::endl;
    fahrenheit();
    return 0;
}
