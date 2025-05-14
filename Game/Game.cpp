#include <iostream>
#include <cstdint>
#include "Game.h"

void game()
{
    std::uint8_t number;
    std::cout << "Please enter your guess: ";
    std::cin >> number;

    if (number >= 0 && number <= 10) {
        if (number == 4) {
            std::cout << "you won!\n";
        } else {
            std::cout << "you lost!\n";
        }
    } else {
        std::cout << "you entered an invalid number!\n";
    }
}
