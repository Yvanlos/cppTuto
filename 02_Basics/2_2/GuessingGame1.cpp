#include <cstdint>
#include <iostream>

int main()
{

    //bool: true/false
    //[0,10]

    std::uint8_t number; // 0 -255
    std::cout << "Please enter your guess: ";
    std::cin >> number;

    if (number >= 0 && number <= 10){
        //bla
        if(number == 4){
            std::cout << "you won!\n";
        }else{
            std::cout << "you lost!\n";
        }
    }else{
        //blo
        std::cout << "you entered an invalid number!\n";
    }

    return 0;
}