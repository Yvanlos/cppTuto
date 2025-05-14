#include <iostream>

int main(){

    int my_value1 = 10;
    int my_value2 = 5;

    int my_result1 = my_value1 + my_value2; // int + int = int 
    std::cout << "addition: " << my_result1 << std::endl;
    // "<<" dieses Symbol kann man so sehen, als würde man den Linken wert in der Konsole reinschieben 
    int my_result2 = my_value1 - my_value2; // int - int = int
    std::cout << "substraction: " << my_result2 << std::endl;

    int my_result3 = my_value1 * my_value2; // int * int = int
    std::cout << "multiplication: " << my_result3 << std::endl;

    int my_result4 = my_value1 / my_value2; 
    // int / int = int | float : Wenn ein fließkomma rauskommt wird alles nach dem comma gelöscht, 
    //wenn ein int erwartet wird sowie bei int my_result4
    std::cout << "division: " << my_result4 << std::endl;



    return 0;
}