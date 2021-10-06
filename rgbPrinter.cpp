// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program is the RGB Printer

#include <iostream>

int main() {
    // This function prints all of the RGB combinations
    for (int red = 0; red <= 255; red++) {  // red value
        for (int green = 0; green <= 255; green++) {  // green value
            for (int blue = 0; blue <= 255; blue++) {  // blue value
                std::cout << "RGB(" << red << "," << green << "," << blue << ")"
                << std::endl;
            }
        }
    }

    std::cout << "\nDone" << std::endl;
}
