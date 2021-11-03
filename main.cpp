// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program will calculate area of decagon

#include <iostream>
#include <cmath>

int main() {
    // main function
    std::cout << "We will be calculating the area of a decagon." << std::endl;

    // define variables
    int length;

    // input
    std::cout << "Enter the length of one side (mm): " << std::endl;
    std::cin >> length;

    // process
    // instead of 5/2 I used 2.5 because there is a bug with using 5/2
    double area = 2.5 * pow(length, 2) * (sqrt(5 + 2 * sqrt(5)));

    // output
    std::cout << area << std::endl;

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
