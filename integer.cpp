// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Oct.11, 2022
// This program checks if an integer is positive, negative, or neither.

#include <iostream>

int main() {
    // Requests the user's integer
    int userInteger;
    std::cout << "Enter an integer: \n";
    std::cout << ">> ";
    std::cin >> userInteger;

    // Code executed if the integer is greater than 0.
    if (userInteger > 0) {
        std::cout << "Your integer is positive." << std::endl;

        // Code executed if the integer is less than 0.
    } else if (userInteger < 0) {
        std::cout << "Your integer is negative." << std::endl;

        // Code executed if the integer is 0.
    } else {
        std::cout << "Your integer is neither negative nor positive (0)."
                  << std::endl;
    }
}
