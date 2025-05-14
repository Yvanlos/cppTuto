#include <iostream>

int main(){

    float my_value1;
    float my_value2;

    std::cout << "please enter the first number:  ";
    std::cin >> my_value1;


    std::cout << "please enter the second number:  ";
    std::cin >> my_value2;

    float my_result1 = my_value1 + my_value2;
    std::cout << "addition: " << my_result1 << std::endl;
    // "<<" dieses Symbol kann man so sehen, als würde man den Linken wert in der Konsole reinschieben 
    float my_result2 = my_value1 - my_value2;
    std::cout << "substraction: " << my_result2 << std::endl;

    float my_result3 = my_value1 * my_value2;
    std::cout << "multiplication: " << my_result3 << std::endl;

    float my_result4 = my_value1 / my_value2;
    std::cout << "division: " << my_result4 << std::endl;



    return 0;
}