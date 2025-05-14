#include <iostream>

//1.) User-Input: side length of a square
//2.) Compute the perimeter and area of a square.
//3.) Print out the value to the console.

int main(){

    double side_length_square = 0.0;
    std::cout << "please enter side length of the square:  ";
    std::cin >> side_length_square;

    double perimeter = 4.0 * side_length_square;
    double area = side_length_square * side_length_square;

    std::cout << "The perimeter is:  " << perimeter << std::endl;
    std::cout << "The area is:  " << area << std::endl;


    return 0;
}