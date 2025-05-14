#include <cstdint>
#include<iostream>

std::int32_t user_Input(){
    std::int32_t number = 0;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    return number;
}

int main(){

    user_Input();
    return 0;
}