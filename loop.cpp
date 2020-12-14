// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: Oct 2019
// This program uses a while loop

#include <iostream>

int main() {
    int positiveInteger;
    int loopCounter = 0;
    std::string positive_as_string;

    // input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> positive_as_string;

    // process
     try {
        positiveInteger = std::stoi(positive_as_string);
        while (loopCounter < positiveInteger) {
            std::cout << loopCounter <<" time through loop." << std::endl;
            loopCounter = loopCounter + 1;
        }
    }catch (std::invalid_argument) {
            std::cout << "That was not a invalid integer" << std::endl;
}
}
