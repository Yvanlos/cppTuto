#include <iostream>
#include <cstdint>
#include <thread>
#include <array>
//iota liegt in numeric
#include<numeric>

namespace
{
    constexpr static auto NUM_THREADS = std::uint32_t{3U};
}

/// @brief 
/// @param input 
/// @param output den return kann man nicht mehr über den return machen aber über einen non const ref value machen
void function(const std::int32_t input, std::int32_t &output)
{  

    output = input * 2;

}

int main(){


    const std::int32_t input = 42;

    auto threads = std::array<std::thread, NUM_THREADS> {};
    auto inputs = std::array<std::int32_t, NUM_THREADS> {};
    auto outputs = std::array<std::int32_t, NUM_THREADS> {};

    //was kommt in den Arrays rein
    std::iota(inputs.begin(), inputs.end(),0);

    for (std::uint32_t i = 0; i < NUM_THREADS; i++){
        // wir machen eine Mapping: wegen &output müssen wir auch std::ref verwenden
        threads[i] = std::thread(function, inputs[i], std::ref(outputs[i]));
    }

    // .... 
    
    for (std::uint32_t i = 0; i < NUM_THREADS; i++){
     
        threads[i].join();
    }

    for(std::uint32_t i = 0; i < NUM_THREADS; i++){
        std::cout << "Input: " << inputs[i] << " and Output: " << outputs[i] << '\n';
    }
        
    return 0;
}