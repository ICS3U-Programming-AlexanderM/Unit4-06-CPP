// Copyright (c) 2022 Alexander Matheson All rights reserved.
//
// Created by: Alexander Matheson
// Created on: Jan 14, 2022
// This program uses a nested loop to
// display RGB color codes
#include <iostream>


int main() {
    // declare variables
    int counter1;
    int counter2;
    int counter3;

    // loop to display RGB color codes
    for (counter1 = 0; counter1 < 51; counter1++) {
        for (counter2 = 0; counter2 < 51; counter2++) {
            for (counter3 = 0; counter3 < 51; counter3++) {
                std::cout << "RGB: " << counter1 << ", " << counter2
                << ", " << counter3 << "\n";
            }
        }
    }
}
