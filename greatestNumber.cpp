// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program finds the greatest number


#include <iostream>


int main() {
    // This function finds the greatest number out of 3 inputted numbers

    int first_number;
    int second_number;
    int third_number;

    std::cout << "Input 3 numbers and"
    << "I will tell you the greatest number!" << std::endl;

    // Input
    std::cout << "First number: ";
    std::cin >> first_number;
    std::cout << "Second number: ";
    std::cin >> second_number;
    std::cout << "Third number: ";
    std::cin >> third_number;

    // Process
    if (first_number > second_number) {
        if (first_number > third_number) {
            std::cout << "The greatest number is " << first_number
            << "!" << std::endl;
        } else {
            std::cout << "The greatest number is " << third_number
            << "!" << std::endl;
        }
    } else {
        if (second_number > third_number) {
            std::cout << "The greatest number is " << second_number
            << "!" << std::endl;
        } else {
            std::cout << "The greatest number is " << third_number
            << "!" << std::endl;
        }
    }
}
